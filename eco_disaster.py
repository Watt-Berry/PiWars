"""
for this challenge will need:
camera
lidar
motor controller
ultrasonic sensor -> check if grabbed barrel to then navigate to end zone
colour sensor/ arduino -> check if we're above red/green at end zone
"""

"""
order of program:
1. determine going for red barrels first
2. using camera find all red barrels (get a list of the smallest blobs between a range)
2.1. filter out the end zone as it will also be red
3. using lidar find the distance to each blob by getting the angle to blob and passing it to lidar
4. determine movement to face barrel and move towards it until it is reached
5. find end zone using camera again to find circle labelled with R inside
6. navigate to end zone
7. repeat until all red barrels are within the end zone ( use colour + blob detectors )

8. now do the same for green barrels and end zone


note: deliver green to blue end zone, red to yellow end zone
"""

from class_lidar2 import LidarDetector
from class_motor import MotorController
from colour_detector import ColourDetector
from blob_detector import BlobDetector
from class_arduino import ColourSensor
import cv2
import math


# return either empty list or list of barrel points on image
def find_red_barrels(img) -> list[list[int]]:
    global colour_detec, blob_detec
    colour_detec.process_image(img)
    blob_detec.process_image(colour_detec.red_mask)
    # loop through the blobs and filter out any too large or too small
    minSize, maxSize = 500, 2000 #TODO: change these to be more accurate

    points = blob_detec.blobs_info
    barrels_points = []
    for c in points:
        size = len(c)
        if minSize < size > maxSize:
            continue
        # find midpoints of barrels on img
        M = cv2.moments(c)
        cX = int(M["m10"] / M["m00"])
        cY = int(M["m01"] / M["m00"])
        barrels_points.append([cX, cY])

    return barrels_points

def find_green_barrels(img) -> list[list[int]]:
    global colour_detec, blob_detec
    colour_detec.process_image(img)
    blob_detec.process_image(colour_detec.green_mask)
    # loop through the blobs and filter out any too large or too small
    minSize, maxSize = 500, 2000 #TODO: change these to be more accurate

    points = blob_detec.blobs_info
    barrels_points = []
    for c in points:
        size = len(c)
        if minSize < size > maxSize:
            continue
        # find midpoints of barrels on img
        M = cv2.moments(c)
        cX = int(M["m10"] / M["m00"])
        cY = int(M["m01"] / M["m00"])
        barrels_points.append([cX, cY])

    return barrels_points

def find_closest_point(frame, points) -> list[list[int], int]:
    height, width, _ = frame.shape
    center = [width // 2, height]

    closest = [-1, 999999] # 0 holds the point and 1 holds the distance to center
    # loop through each point in points and get to the closest one
    for c in points:
        # formula to center is sqrt( (x2 - x1)^2 + (y2 - y1)^2 )
        distance = math.sqrt( (c[0] - center[0])**2 + (c[1] - center[1])**2 )
        if distance < closest[1]:
            closest = [c, distance]

    return closest


def navigate_based_on_point(frame, point: list[int]) -> None:
    global motors, speed

    height, width, _ = frame.shape
    width_part = width / 5
    height_part = height / 1.5

    if point[0] < width_part * 2:
        # left
        if point[1] < height_part:
            # top left
            motors.left_forward(speed)
        else:
            # bottom left
            motors.turn_left(speed * 2)
    elif point[0] > width - (width_part * 2):
        # right
        if point[1] < height_part:
            # top right
            motors.right_forward(speed)
        else:
            # bottom right
            motors.turn_right(speed * 2)
    else:
        # center
        motors.move_forward(speed)

def find_angle(point, center) -> float:
    angle = math.asin(
        (center[1] - point[1]) / 
        math.sqrt((center[1] - point[1])**2 + (center[0] - point[0])**2)
    )
    return angle


def is_holding_barrel(scans: dict) -> bool:
    for angle in range(350, 361):
        if scans[str(angle)] < 250:
            return True
    for angle in range(0, 11):
        if scans[str(angle)] < 250:
            return True
    return False


if __name__ == "__main__":
    video = cv2.VideoCapture(0)
    motors = MotorController()
    lidar = LidarDetector("/dev/ttyUSB0")
    colour_sensor = ColourSensor("/dev/ttyUSB1")
    colour_detec = ColourDetector()
    blob_detec = BlobDetector()

    speed = 20

    hunting_red = hunting_green = True

    # first find and sort all red barrels
    while hunting_red:
        # get red blobs/barrels in frame
        result, frame = video.read()
        if not result:
            # if nothing found then try again
            continue

        # check if holding barrel currently
        # use lidar to get distance in front and check if holding barrel
        scans = lidar.get_scan()

        if is_holding_barrel(scans):
            # find YELLOW end zone and navigate to it until above yellow zone
            # check if above yellow
            if colour_sensor.is_yellow(colour_sensor.read_colour()):
                # then back out and turn fully around
                motors.move_backward(speed)
                motors.turn_right(80)
            else:
                # find end zone
                # pass frame to colour sensor and get yellow mask
                colour_detec.process_image(frame)
                blob_detec.process_image(colour_detec.yellow_mask)
                points = blob_detec.blobs_info
                if len(points) == 0:
                    motors.turn_right(speed * 2)
                else:
                    # determine movement to take based on where blob is in image
                    # find midpoint of blobs
                    for c in points:
                        M = cv2.moments(c)
                        cX = int(M["m10"] / M["m00"])
                        cY = int(M["m01"] / M["m00"])
                    midpoint = [cX, cY]
                    height, width, _ = blob_detec.blobs_img.shape
                    
                    # get angle at which object is at
                    angle = find_angle(midpoint, [width // 2, height])
                    # find distance at angle using lidar
                    
                    dist = (scans[angle] + scans[angle - 1] + scans[angle + 1]) / 3
                    speed = min(round(dist / 4000 * 80), 80)

                    if midpoint[0] < width // 2.5:
                        motors.turn_left(speed * 2)
                    elif midpoint[0] > width - (width // 2.5):
                        motors.turn_right(speed * 2)
                    else:
                        motors.move_forward(speed * 2)
                continue

        # keep turning to and finding barrels, if found then continue to next code
        # otherwise break if done too many turns as no more barrels are therefore left
        points = []
        num_turns = 0
        while len(points) == 0 and num_turns < 4:
            points = find_red_barrels(frame)
            motors.turn_right(50)
            num_turns += 1
        
        if len(points) == 0:
            break

        # otherwise find the closest barrel and navigate to it
        # closest = closest to the middle of the bottom of the screen = closest to [width // 2, height]
        closest = find_closest_point(frame, points)
        if closest[0] == -1:
            continue

        # navigate to the closest based on the coordinates of the image
        navigate_based_on_point(frame, closest[0])




    # then find and sort all green barrels
    while hunting_green:
        # get red blobs/barrels in frame
        result, frame = video.read()
        if not result:
            # if nothing found then try again
            continue

        # check if holding barrel currently
        # use lidar to get distance in front and check if holding barrel
        scans = lidar.get_scan()

        if is_holding_barrel(scans):
            # find YELLOW end zone and navigate to it until above yellow zone
            # check if above yellow
            if colour_sensor.is_blue(colour_sensor.read_colour()):
                # then back out and turn fully around
                motors.move_backward(speed)
                motors.turn_right(80)
            else:
                # find end zone
                # pass frame to colour sensor and get yellow mask
                colour_detec.process_image(frame)
                blob_detec.process_image(colour_detec.yellow_mask)
                points = blob_detec.blobs_info
                if len(points) == 0:
                    motors.turn_right(speed * 2)
                else:
                    # determine movement to take based on where blob is in image
                    # find midpoint of blobs
                    for c in points:
                        M = cv2.moments(c)
                        cX = int(M["m10"] / M["m00"])
                        cY = int(M["m01"] / M["m00"])
                    midpoint = [cX, cY]
                    height, width, _ = blob_detec.blobs_img.shape

                    # get angle at which object is at
                    angle = find_angle(midpoint, [width // 2, height])
                    # find distance at angle using lidar
                    dist = scans[angle]
                    speed = dist / 4000 * 100

                    if midpoint[0] < width // 2.5:
                        motors.turn_left(speed * 2)
                    elif midpoint[0] > width - (width // 2.5):
                        motors.turn_right(speed * 2)
                    else:
                        motors.move_forward(speed * 2)
                continue
        
        # keep turning to and finding barrels, if found then continue to next code
        # otherwise break if done too many turns as no more barrels are therefore left
        points = []
        num_turns = 0
        while len(points) == 0 and num_turns < 4:
            points = find_green_barrels(frame)
            motors.turn_right(50)
            num_turns += 1
        
        if len(points) == 0:
            break

        # otherwise find the closest barrel and navigate to it
        # closest = closest to the middle of the bottom of the screen = closest to [width // 2, height]
        closest = find_closest_point(frame, points)
        if closest[0] == -1:
            continue

        # navigate to the closest based on the coordinates of the image
        navigate_based_on_point(frame, closest[0])
        
    # at the end stop
    motors.stop()
    
