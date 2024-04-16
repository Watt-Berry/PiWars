#!/usr/bin/env python
import freenect
import cv2
import numpy as np
from class_motor import MotorController
from colour_detector import ColourDetector
from blob_detector import BlobDetector

# WILL NOT USE IF EITHER: NOT USING KINECT ANYMORE, OR USING IR SENSORS

def display_depth(dev, data, timestamp):
    pass


def get_next_direction(row_img) -> list[int]:
    height, width, _ = row.shape
    partX = width // 3
    sectioned_row = [
        row_img[0: height, 0: partX],
        row_img[0: height, partX: partX * 2],
        row_img[0: height, partX * 2: width]
    ]
    
    largest = [-1, -1]
    for i, part in enumerate(sectioned_row):
        num_white = cv2.countNonZero(part)
        if num_white > largest[1]:
            largest = [i, num_white]
    
    return largest
    



def display_rgb(dev, data, timestamp):
    # data = THE FRAME = is RGB
    # convert frame to bgr
    data = cv2.cvtColor(data, cv2.COLOR_RGB2BGR)
    # get the ahead grayscale image
    colour_detec.process_image(data)
    grey = colour_detec.grayscale_channel
    
    # split the image into a 3x3 grid
    height, width = grey.shape
    partX = width // 3
    partY = height // 3
    # inspect bottom row to see if need to take drastic turns or not
    bottom_row = grey[partY * 2: height]
    bottom_row = [bottom_row[0:height, 0: partX], bottom_row[0: height, partX: partX * 2], bottom_row[0: height, partX * 2: width]]
    # count the number of white pixels in each area and see if left or right > middle
    for img in bottom_row:
        cv2.imshow("part", img)
    
    largest = [-1, -1, None]
    for i, part in enumerate(bottom_row):
        num_white = cv2.countNonZero(part)
        if num_white > largest[1]:
            largest = [i, num_white, part]
    #cv2.imshow("largest", largest[2])
    if largest[0] == 0:
        # turn left immediately
        motor_control.turn_left(20)
        return
    elif largest[0] == 2:
        motor_control.turn_right(20)
        return
    
    # determine how fast forward to move based on when the straight line ends
    # determine the length by checking each row and the length will be up to
    # whenever the middle isnt the max -1
    

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
    
    colour_detec = ColourDetector()
    blob_detec = BlobDetector()
    motor_control = MotorController()
    
    init_runloop()

    print("after")

