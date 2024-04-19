"""
for minesweeper need to use:
    motor controller
    colour sensor/arduino
    usb camera to get video frame
    colour detector
    blob detector
"""

"""
kinect video means it HAS TO BE event based
other cameras could allow more freedom into custom loops
"""



import numpy as np
import cv2
from class_arduino import ColourSensor
from class_motor import MotorController
from colour_detector import ColourDetector
from blob_detector import BlobDetector


def determine_movement_based_on_frame(img) -> None:
    global motor_control

    height, width, channels = img.shape
    partX = width // 3 # used to split the image into 3x3 grid
    partY = height // 3
    # compare the largest blob midpoint to the midx and midy of the image
    target = largest[1]
    # determine speed based on y
    # if using kinect, camera will be pointed down slightly so objects higher will be further
    speed = 50
    if target[1] > partY * 2:
        speed = 25
    elif target[1] < partY * 1:
        speed = 75
    else:
        speed = 50
    
    if target[0] > partX * 2:
        # move right and forward
        motor_control.right_forward(speed)
    elif target[0] < partX * 1:
        motor_control.left_forward(speed)
    else:
        motor_control.move_forward(speed)
    
    # if theres a object found then determine a path and move towards it
    # in the next iteration it will do the same thing, so move based on 1 frame only



if __name__ == "__main__":
    #init needed components
    motor_control = MotorController()
    colour_sensor = ColourSensor("/dev/ttyUSB0")
    video_capture = cv2.VideoCapture(0)
    colour_detec = ColourDetector()
    blob_detec = BlobDetector()

    while True:
        # check if colour sensor detects above red
        colour_below = colour_sensor.read_colour()
        if colour_below and colour_sensor.is_red(colour_below):
            print("STILL ABOVE RED DONT MOVE")
            motor_control.stop()
            continue
        print("NOT ABOVE RED, MOVE")
        # check if red found in camera view
        result, video_frame = video_capture.read()
        if not result:
            continue
        # pass frame to colour detector and blob detector to find red and blob it out
        colour_detec.process_image(video_frame)
        blob_detec.process_image(colour_detec.red_mask)
        # check if theres any red blobs and if so find positions
        points = blob_detec.blobs_info
        
        largest = [-1, -1]
        for c in points:
            # find the area of the countours
            size = len(c)
            if size > largest[0]:
                largest[0] = size
                # get the midpoint of the new largest
                M = cv2.moments(c)
                cX = int(M["m10"] / M["m00"])
                cY = int(M["m01"] / M["m00"])
                largest[1] = [cX, cY]
        if largest[0] == -1:
            # if largest not changed due to no points then return to continue to next iteration
            print("no red found")
            # if no red found then turn right a bit and move onto next loop
            motor_control.turn_right(50)
            continue

        determine_movement_based_on_frame(blob_detec.blobs_img)