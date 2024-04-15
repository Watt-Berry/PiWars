"""
for minesweeper need to use:
    motor controller
    colour sensor/arduino
    kinect video to get frame
    colour detector
    blob detector
"""

"""
kinect video means it HAS TO BE event based
other cameras could allow more freedom into custom loops
"""



import numpy as np
import cv2
import freenect
from class_arduino import ArduinoReader
from class_motor import MotorController
from colour_detector import ColourDetector
from blob_detector import BlobDetector

def display_depth(dev, data, timestamp):
    pass

def display_rgb(dev, data, timestamp):
    # check if colour sensor detects if above red
    colour_sensed = arduino_read.read_colour()
    if colour_sensed and arduino_read.is_red(colour_sensed):
        # dont move if red is sensed underneath the robot
        motor_control.stop()
    # otherwise turn until red is found
    print("TURN IN PLACE AND CHECK IF RED FOUND")
    motor_control.turn_right(20)
    
    # check frame to see if red is in view
    colour_detec.process_image(cv2.cvtColor(data, cv2.COLOR_RGB2BGR))
    blob_detec.process_image(colour_detec.red_mask)
    points = blob_detec.blobs_info #gets all points where red is found
    
    cv2.imshow("red", blob_detec.blobs_img)
    cv2.waitKey(1)
    # group the points that are close together to find close objects
    # OR get the midpoint and navigate based on it
    
    # largest stores the length at index 0 and midpoint at index 1
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
        return
    # get mid x and mid y of img
    height, width, channels = blob_detec.blobs_img.shape
    partX = width // 3 # used to split the image into 3x3 grid
    partY = height // 3
    # compare the largest blob midpoint to the midx and midy of the image
    target = largest[1]
    # determine speed based on y
    # if using kinect, camera will be pointed down slightly so objects higher will be further
    speed = 20
    if target[1] > partY * 2:
        speed = 10
    elif target[1] < partY * 1:
        speed = 30
    else:
        speed = 20
    
    if target[0] > partX * 2:
        # move right and forward
        motor_control.right_forward(speed)
    elif target[0] < partX * 1:
        motor_contol.left_forward(speed)
    else:
        motor_control.forward(speed)
    
    # if theres a object found then determine a path and move towards it
    # in the next iteration it will do the same thing, so move based on 1 frame only

def body(*args):
    if not keep_running:
        raise freenect.Kill
    

def init_runloop():
    print('Press ESC in window to stop')
    freenect.runloop(depth=display_depth,
                     video=display_rgb,
                     body=body)



if __name__ == "__main__":
    keep_running = True
    
    arduino_read = ArduinoReader()
    motor_control = MotorController()
    colour_detec = ColourDetector()
    blob_detec = BlobDetector()
    
    init_runloop()