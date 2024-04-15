#!/usr/bin/env python
import freenect
import cv2
import frame_convert2
import apriltag
import numpy as np
#from class_motor import MotorController
from colour_detector import ColourDetector
from blob_detector import BlobDetector


    # Function to calculate the orientation of the detected tag
def calculate_orientation(corners):
    # Assuming corners are ordered clockwise from top-left
    # Calculate the vector of the top side of the tag
    top_side_vector = corners[1] - corners[0]
    # Calculate the angle of the tag
    angle_rad = np.arctan2(top_side_vector[1], top_side_vector[0])
    # Convert angle from radians to degrees
    angle_deg = np.degrees(angle_rad)
    # Normalize angle to be between 0 and 360 degrees
    if angle_deg < 0:
        angle_deg += 360
    return angle_deg

# Function to orientate the robot based on tag position and orientation
def orientate_robot(tag_id, tag_center, tag_orientation):
     # Example function to orientate the robot based on tag information
    print(f"Tag ID: {tag_id}, Center: {tag_center}, Orientation: {tag_orientation} degrees")
    # Your robot orientation logic goes here


# Function to find and return to the initial AprilTag position
def return_to_initial_tag():
    #Example function to find and return to the initial tag position
    print("Returning to initial tag position...")

centers = []

def display_depth(dev, data, timestamp):
    print(type(data))
    for center in centers:
        if center[0] < 480 and center[1] < 480 and center[0] > 0 and center[1] > 0: 
            depth = data[center[0], center[1]]
            cv2.putText(data, f"{depth}", center, cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

    
    cv2.imshow('Depth', frame_convert2.pretty_depth_cv(data))
    centers.clear()
    if cv2.waitKey(10) == 27:
        keep_running = False

def display_rgb(dev, data, timestamp):
    # data = THE FRAME = is RGB
    global keep_running, initial_tag_id, initial_tag_center, colour_detec, blob_detec
    gray = cv2.cvtColor(data, cv2.COLOR_BGR2GRAY)
    print(type(data))
    detections = detector.detect(gray)
    # Draw detection results on the frame
    if detections:
        for detection in detections:
             # Extract tag ID, corners, and center
            tag_id = detection.tag_id
            corners = detection.corners.astype(int)
            center = np.mean(corners, axis=0).astype(int)
#            print(f"{center}")
            centers.append(center)
                 # Calculate orientation
            orientation_deg = calculate_orientation(corners)
             # If the initial tag ID and center are not set, set them
            if initial_tag_id is None:
                initial_tag_id = tag_id
                initial_tag_center = center
#                    # Draw tag ID and orientation on the frame
            cv2.putText(data, f"Tag ID: {tag_id}", (corners[0][0], corners[0][1] - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
            cv2.putText(data, f"Orientation: {orientation_deg:.2f} deg", (corners[0][0], corners[0][1] - 30), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
#                    # Call function to orientate the robot based on tag information
            orientate_robot(tag_id, center, orientation_deg)
#                    # Draw the tag outline
            cv2.polylines(data, [corners], True, (0, 255, 0), 2)
   
    # pass frame to colour detector and get the blue blobs
    # draw rectangles around blue blobs
    bgr_data = cv2.cvtColor(data, cv2.COLOR_RGB2BGR)
    colour_detec.process_image(bgr_data)
    
    #cv2.imshow("blue mask", colour_detec.blue_mask)
    blob_detec.process_image(colour_detec.blue_mask)
    cv2.imshow("blue areas", blob_detec.blobs_img)
    #objects_detected = blob_detec.blobs_info

    cv2.imshow('RGB', frame_convert2.video_cv(data))
    if cv2.waitKey(10) == 27:
        keep_running = False

def body(*args):
    if not keep_running:
        raise freenect.Kill

def init_runloop():
    print('Press ESC in window to stop')
    freenect.runloop(depth=display_depth,
                     video=display_rgb,
                     body=body)


if __name__ == "__main__":
    colour_detec = ColourDetector()
    blob_detec = BlobDetector() 

    cv2.namedWindow('Depth')
    cv2.namedWindow('RGB')
    keep_running = True
    # Initialize the AprilTag detector
    detector = apriltag.Detector()

    # Variables to store the initial tag ID and position
    initial_tag_id = None
    initial_tag_center = None

    init_runloop()

    print("after")
