from inputs import get_gamepad
from class_motor import MotorController
import RPi.GPIO as GPIO
import math
import cv2


"""
left joystick values:
codes: ABS_X, ABS_Y
states: x = left: 0 right:255, y= top:0 bottom:255
"""


"""
CONTROLS:
left joystick -> movement
right joystick x axis -> rotating left/right
L1 -> decrease speed
R1 -> increase speed
TODO: button presses + functionality to shoot
"""


# for getting speed based on how far in a direction the joystick is
# very sensitive though as it does not often get values close together
def get_speed(val: int) -> int:
    return abs(round(math.cos(val / 1.41) * 100))

def set_movement(code: str, val: int):
    global speed, direction, rotation
    # update the speed
    #speed = get_speed(val)
    if code == "BTN_TL":
        speed = max(0, speed - 10)
    elif code == "BTN_TR":
        speed = min(100, speed + 10)

    # handle left joystick for movement
    elif code == "ABS_X":
        #print(speed)
        if val < 120:
            direction['x'] = -1
        elif val > 130:
            direction['x'] = 1
        else:
            direction['x'] = 0
    elif code == "ABS_Y":
        #print(speed)
        if val < 120:
            direction['y'] = 1
        elif val > 130:
            direction['y'] = -1
        else:
            direction['y'] = 0
    # handle right joystick for rotation
    elif code == "ABS_Z":
        print("rotation called")
        if val < 120:
            rotation = -1
        elif val > 130:
            rotation = 1
        else:
            rotation = 0


if __name__ == "__main__":
    motors = MotorController()
    video = cv2.VideoCapture(0)

    direction = {'x': 0, 'y': 0}
    rotation, is_rotating = 0, False
    speed = 20

    while True:
        try:
            # get and display frame
            result, frame = video.read()
            if result:
                cv2.imshow("Robot View", frame)
                cv2.waitKey(1)


            events = get_gamepad()
            for event in events:
                if event.code == "SYN_REPORT":
                    continue

                print(event.code)
                print(event.state)

                set_movement(event.code, event.state)

                print(rotation)
                # handle rotations
                if rotation == 0: 
                    motors.stop()
                    is_rotating = False
                elif rotation <= -1: 
                    motors.turn_left(speed)
                    is_rotating = True
                elif rotation >= 1: 
                    motors.turn_right(speed)
                    is_rotating = True

                if is_rotating:
                    continue

                # handle movements
                if direction['x'] == 0 and direction['y'] == 0: motors.stop()
                
                elif direction['x'] == 0 and direction['y'] >= 1: 
                    motors.move_forward(speed)
                elif direction['x'] == 0 and direction['y'] <= -1: 
                    motors.move_backward(speed)
                elif direction['x'] >= 1 and direction['y'] == 0: 
                    motors.strafe_right(speed)
                elif direction['x'] <= -1 and direction['y'] == 0: 
                    motors.strafe_left(speed)
                
                elif direction['x'] >= 1 and direction['y'] >= 1: 
                    motors.right_forward(speed)
                elif direction['x'] >= 1 and direction['y'] <= -1: 
                    motors.right_reverse(speed)
                elif direction['x'] <= -1 and direction['y'] >= 1: 
                    motors.left_forward(speed)
                elif direction['x'] <= -1 and direction['y'] <= -1: 
                    motors.left_reverse(speed)
        except Exception as e:
            # break out forcefully when done and stop the motor
            print(e)
            break

    motors.stop()
    GPIO.cleanup()