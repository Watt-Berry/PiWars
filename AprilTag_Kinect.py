#!/usr/bin/env python
import cv2
import apriltag
import numpy as np
import time
import freenect
import frame_convert2

# Initialize the AprilTag detector
#detector = apriltag.Detector()

# Variables to store the initial tag ID and position
initial_tag_id = None
initial_tag_center = None

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
    global initial_tag_id, initial_tag_center

    # Example function to find and return to the initial tag position
    print("Returning to initial tag position...")
    # Your robot navigation logic to return to the initial tag position goes here

# Initialize the camera (Kinect in your case)
#cap = cv2.VideoCapture(0)

# Timer to track the time elapsed since startup
start_time = time.time()

#cv2.namedWindow('Depth')
cv2.namedWindow('RGB')
keep_running = True



def display_rgb(dev, data, timestamp):
    global keep_running
    frame = data
#    frame = np.ascontiguousarray(frame, dtype=np.uint8)
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    
#    detections = detector.detect(gray)
#    if True:
#    # Draw detection results on the frame
#        if detections:
#            for detection in detections:
#            # Extract tag ID, corners, and center
#                tag_id = detection.tag_id
#                corners = detection.corners.astype(int)
#                center = np.mean(corners, axis=0).astype(int)
#                # Calculate orientation
#                orientation_deg = calculate_orientation(corners)
#                # If the initial tag ID and center are not set, set them
#               # if initial_tag_id is None:
#               #     initial_tag_id = tag_id
#               #     initial_tag_center = center
#                    # Draw tag ID and orientation on the frame
#                cv2.putText(frame, f"Tag ID: {tag_id}", (corners[0][0], corners[0][1] - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
#                cv2.putText(frame, f"Orientation: {orientation_deg:.2f} deg", (corners[0][0], corners[0][1] - 30), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
#                    # Call function to orientate the robot based on tag information
#                orientate_robot(tag_id, center, orientation_deg)
#                    # Draw the tag outline
#                cv2.polylines(frame, [corners], True, (0, 255, 0), 2)
#


    frame_display = frame_convert2.video_cv(frame)
    cv2.imshow('RGB', frame_display)

def display_depth(dev, data, timestamp):
    pass
#    cv2.imshow('Depth', frame_convert2.pretty_depth_cv(data))


def body(*args):
    if not keep_running:
        raise freenect.Kill


freenect.runloop(depth=display_depth, video=display_rgb, body=body)

#while True:

    # Convert the frame to grayscale
  #  gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Detect AprilTags in the grayscale frame
  #  detections = detector.detect(gray)

    # Draw detection results on the frame
 #   if detections:
 #       for detection in detections:
            # Extract tag ID, corners, and center
           # tag_id = detection.tag_id
           # corners = detection.corners.astype(int)
          #  center = np.mean(corners, axis=0).astype(int)
            # Calculate orientation
          #  orientation_deg = calculate_orientation(corners)

            # If the initial tag ID and center are not set, set them
         #   if initial_tag_id is None:
        #        initial_tag_id = tag_id
       #         initial_tag_center = center

            # Draw tag ID and orientation on the frame
      #      cv2.putText(frame, f"Tag ID: {tag_id}", (corners[0][0], corners[0][1] - 10),
     #                   cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
    #        cv2.putText(frame, f"Orientation: {orientation_deg:.2f} deg", (corners[0][0], corners[0][1] - 30),
  ##                      cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
            # Call function to orientate the robot based on tag information
 #           orientate_robot(tag_id, center, orientation_deg)
            # Draw the tag outline
#            cv2.polylines(frame, [corners], True, (0, 255, 0), 2)

    # Display the frame
   # cv2.imshow('AprilTag Detection', frame)

    # Check if 180 seconds have passed since startup
#    elapsed_time = time.time() - start_time
 #   if elapsed_time >= 180:
        # Find and return to the initial AprilTag position
  #      return_to_initial_tag()
        # Reset the timer
   #     start_time = time.time()

    # Break the loop when 'q' is pressed
   # if cv2.waitKey(1) & 0xFF == ord('q'):
    #    break

# Release the camera and close OpenCV windows
#cap.release()
#cv2.destroyAllWindows()
