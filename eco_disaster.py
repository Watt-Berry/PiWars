"""
for this challenge will need:
camera
lidar
motor controller
ultrasonic sensor -> check if too close to wall?
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

from class_lidar import LidarDetector
from class_motor import MotorController
from colour_detector import ColourDetector
from blob_detector import BlobDetector


if __name__ == "__main__":
    