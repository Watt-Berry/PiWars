"""
for line following without kinect need:
motor controller
ir sensors (preferably 3)
    with 3 can have left, middle, right
    with 2 can have left, right, then middle will be the colour sensor
camera -> to check if finished course
"""


from class_motor import MotorController
import PiMotor
import RPi.GPIO as GPIO
import time


if __name__ == "__main__":
    motor_control = MotorController()
    motor_control.stop()

    # ir sensors don't use boundary
    ir1 = PiMotor.Sensor("IR1", 100) #left
    ir2 = PiMotor.Sensor("ULTRASONIC", 100) #middle
    ir3 = PiMotor.Sensor("IR2", 100) #right

    speed = 50

    move = False
    prev_state = 0

    last_move = None
    is_turn = False

    try:
        time.sleep(1)
        while True:
            # get data from ir sensors
            ir1.iRCheck()
            ir2.iRCheck()
            ir3.iRCheck()

            left_val = ir1.Triggered #not ir1.Triggered
            mid_val = ir2.Triggered #not ir2.Triggered
            right_val = ir3.Triggered #not ir3.Triggered

            print(left_val, mid_val, right_val, speed)

            # Triggered True means sees black, False means sees white
            new_move = last_move
            if left_val == mid_val == right_val == 1: #WWW
                motor_control.stop()
            elif left_val == mid_val == right_val == 0: #BBB
                new_move = last_move
            elif not left_val and not mid_val and right_val: #WWB
                new_move = motor_control.turn_right
                is_turn = True
            elif not left_val and mid_val and not right_val: #WBW
                new_move = motor_control.move_forward
                is_turn = False
            elif not left_val and mid_val and right_val: #WBB
                new_move = motor_control.turn_right
                is_turn = True
            elif left_val and not mid_val and not right_val: #BWW
                new_move = motor_control.turn_left
                is_turn = True
            elif left_val and not mid_val and right_val: #BWB
                new_move = motor_control.move_backward
                is_turn = False
            elif left_val and mid_val and not right_val: #BBW
                new_move = motor_control.turn_left
                is_turn = True

            if is_turn: new_move(min(speed * 1.5, 80))
            else: new_move(speed)

            last_move = new_move

    except KeyboardInterrupt:
        motor_control.stop()
        pass
