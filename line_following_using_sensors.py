"""
for line following without kinect need:
motor controller
ir sensors (preferably 3)
    with 3 can have left, middle, right
    with 2 can have left, right, then middle will be the colour sensor
camera -> to check if finished course
"""

from class_motor import MotorController()
from class_arduino import ArduinoReader()
# import camera

def at_finish(frame) -> bool:
    # check if theres no more white path in front and only behind, if true then return true else false
    pass

def determine_movement(vals: list[int]) -> None:
    # choose a movement to do based on the ir sensor values and then move using motor controller
    pass

if __name__ == "__main__":
    motor_control = MotorController()
    arduino_read = ArduinoReader()
    
    # change to checking if no path left in front using camera
    while True:
        # get data from ir sensors
        # navigate based on that
    
    # last push to the end zone then stop
    motor_control.move_forward(20)
    motor_control.stop()
        