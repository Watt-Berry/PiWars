"""
for line following without kinect need:
motor controller
ir sensors (preferably 3)
    with 3 can have left, middle, right
    with 2 can have left, right, then middle will be the colour sensor
camera -> to check if finished course
"""


from class_motor import MotorController
from class_arduino import ColourSensor
import PiMotor
import RPi.GPIO as GPIO
import time
from inputs import get_gamepad



if __name__ == "__main__":
    motor_control = MotorController()
    motor_control.stop()
    ir1 = PiMotor.Sensor("IR1", 5000) #left
    ir2 = ColourSensor("/dev/ttyUSB0") #middle
    ir3 = PiMotor.Sensor("IR2", 5000) #right

    speed = 15

    # check if colour sensor is working
    # try:
    #     for i in range(10):
    #         print(ir2.read_colour())
    # except KeyboardInterrupt:
    #     pass

    # ^
    # if working then ctrl C once
    # if not working then ctrl C twice / stop program

    move = False
    prev_state = 0

    try:
        # change to checking if no path left in front using camera
        while True:
            events = get_gamepad()
            for event in events:
                # if event.code == "BTN_NORTH":
                #     ir2 = ColourSensor("/dev/ttyUSB0")
                #     for i in range(10):
                #         print(ir2.read_colour())
                if event.code != "BTN_SOUTH": continue
                if prev_state == 1 and event.state == 0:
                    move = not move
                    break
                prev_state = event.state
                
            if not move:
                motor_control.stop()
                continue
            
            
            # get data from ir sensors
            ir1.iRCheck()
            ir3.iRCheck()
            
            mid_val = True#not ir2.is_black(ir2.read_colour())
            left_val = not ir1.Triggered
            right_val = not ir3.Triggered

            print(left_val, mid_val, right_val)

            # Triggered True means sees black, False means sees white
            # if left_val:
            #     motor_control.turn_left(speed * 2)
            # elif right_val:
            #     motor_control.turn_right(speed * 2)
            # elif mid_val:
            #     motor_control.move_forward(speed)

            # if left_val == mid_val == right_val == 0: #WWW
            #     motor_control.stop()
            #     break
            # elif left_val == mid_val == right_val == 1: #BBB
            #     motor_control.move_backward(speed)

            if not left_val and not mid_val and not right_val: #WWW
                motor_control.stop()
            elif left_val and right_val: #BWB
                motor_control.move_backward(speed // 2)
            elif left_val:
                motor_control.turn_left(speed * 2)
            elif right_val:
                motor_control.turn_right(speed * 2)
            elif mid_val:
                motor_control.move_forward(speed)
            # elif not left_val and not mid_val and right_val: #WWB
            #     motor_control.turn_right(speed * 2)
            # elif not left_val and mid_val and not right_val: #WBW
            #     motor_control.move_forward(speed)
            # elif not left_val and mid_val and right_val: #WBB
            #     motor_control.turn_right(speed * 2)
            # elif left_val and not mid_val and not right_val: #BWW
            #     motor_control.turn_left(speed * 2)
            # elif left_val and not mid_val and right_val: #BWB
            #     motor_control.move_backward(speed)
            # elif left_val and mid_val and not right_val: #BBW
            #     motor_control.turn_left(speed * 2)

    except KeyboardInterrupt:
        pass

    motor_control.move_forward(25)
    motor_control.stop()
        
