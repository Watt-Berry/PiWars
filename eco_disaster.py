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
"""

#from class_lidar import LidarDetector
from class_motor import MotorController
from colour_detector import ColourDetector
from blob_detector import BlobDetector
from class_ultrasonic import UltrasonicSensor
from class_arduino import ColourSensor
import cv2
import math

# return either empty list or list of barrel points on image
def find_red_barrels(img) -> list[list[int]]:
    global colour_detec, blob_detec
    colour_detec.process_image(img)
    blob_detec.process_image(colour_detec.red_mask)
    # loop through the blobs and filter out any too large or too small
    minSize, maxSize = 1000, 10_000 #TODO: change these to be more accurate

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
    minSize, maxSize = 1000, 10_000 #TODO: change these to be more accurate

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
    global motor_control

    height, width, _ = frame.shape
    width_part = width / 5
    height_part = height / 1.5

    if point[0] < width_part * 2:
        # left
        if point[1] < height_part:
            # top left
            motor_control.left_forward(30)
        else:
            # bottom left
            motor_control.turn_left(60)
    elif point[0] > width - (width_part * 2):
        # right
        if point[1] < height_part:
            # top right
            motor_control.right_forward(30)
        else:
            # bottom right
            motor_control.turn_right(60)
    else:
        # center
        if point[1] < height_part // 2:
            # at the end
            motor_control.move_forward(100)
        elif point[1] < height_part:
            # in middle
            motor_control.move_forward(50)
        else:
            # at start/ very close
            motor_control.move_forward(25)



if __name__ == "__main__":
    video_stream = cv2.VideoCapture(0)
    motor_control = MotorController()
    ultrasonic = UltrasonicSensor()
    colour_sensor = ColourSensor("/dev/ttyUSB0")
    colour_detec = ColourDetector()
    blob_detec = BlobDetector()

    hunting_red = hunting_green = True

    # first find and sort all red barrels
    while hunting_red:
        # get red blobs/barrels in frame
        result, frame = video_stream.read()
        if not result:
            # if nothing found then try again
            continue

        # check if holding barrel currently
        if ultrasonic.get_distance() < 10.0:
            # find end zone and navigate to it
            """
            TODO: using lidar get map of arena and where currently
            navigate to one wall and move along the walls of the arena until
            colour sensor detects that the robot is above red
            """   

        # keep turning to and finding barrels, if found then continue to next code
        # otherwise break if done too many turns as no more barrels are therefore left
        points = []
        num_turns = 0
        while len(points) == 0 and num_turns < 4:
            points = find_red_barrels(frame)
            motor_control.turn_right(50)
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
        result, frame = video_stream.read()
        if not result:
            # if nothing found then try again
            continue

        # check if holding barrel currently
        if ultrasonic.get_distance() < 10.0:
            # find end zone and navigate to it
            """
            TODO: using lidar get map of arena and where currently
            navigate to one wall and move along the walls of the arena until
            colour sensor detects that the robot is above red
            """
        
        # keep turning to and finding barrels, if found then continue to next code
        # otherwise break if done too many turns as no more barrels are therefore left
        points = []
        num_turns = 0
        while len(points) == 0 and num_turns < 4:
            points = find_green_barrels(frame)
            motor_control.turn_right(50)
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
    motor_control.stop()
    
