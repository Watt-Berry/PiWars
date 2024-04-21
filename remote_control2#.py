from inputs import get_gamepad
from class_motor import MotorController
import RPi.GPIO as GPIO
import math
import cv2


from pynput.keyboard import Key, Listener

def on_press(key):
    global direction, rotation, speed
    try:
        print(key, "was pressed")
        # handle movement presses
        if key.char == 'w':
            direction['y'] += 1
        elif key.char == 's':
            direction['y'] -= 1
        elif key.char == 'a':
            direction['x'] -= 1
        elif key.char == 'd':
            direction['x'] += 1
        
        #handle rotation presses
        elif key.char == 'q':
            rotation -= 1
        elif key.char == 'e':
            rotation += 1
            
        #handle speed changes
        elif key.char == '1':
            #print("speed down")
            speed = max(0, speed - 10)
        elif key.char == '2':
            #print("speed up")
            speed= min(80, speed + 10)
            
    except AttributeError:
        print("invalid key was pressed")
        
def on_release(key):
    global direction, rotation
    if key == Key.esc:
        return False
    
    try:
        # read key
        # reset the directional axis when a key along the axis is released
        if key.char in ['w', 's']:
            direction['y'] = 0
        elif key.char in ['a', 'd']:
            direction['x'] = 0
        elif key.char in ['q', 'e']:
            rotation = 0 
    except:
        print("invalid key released")

# README: wasd for movement, q to turn left, e to turn right, esc to stop
# RUN THIS ONLY if switching to remote control

if __name__ == "__main__":
    mc = MotorController()
    #spinner = Spinner()
    #distance_sensor = UltrasonicSensor()
    #arduino = ArduinoReader()
    direction = {'x': 0, 'y': 0} #2-index arr for storing x and y
    rotation = 0 # -1 for left 0 for still 1 for right
    


    speed = 40
    
    listener = Listener(
        on_press=on_press,
        on_release=on_release)
    listener.daemon = False
    listener.start()
    
    while listener.running:
        pass
        print(direction)
        print(rotation)
        print(speed)
        
        # read rotation
        if rotation == 0: mc.stop()
        elif rotation <= -1: mc.turn_left(speed)
        elif rotation >= 1: mc.turn_right(speed)
        
        # read direction
        #if direction['x'] == 0 and direction['y'] == 0: mc.stop()
        
        if direction['x'] == 0 and direction['y'] >= 1: mc.move_forward(speed * 2)
        elif direction['x'] == 0 and direction['y'] <= -1: mc.move_backward(speed * 2)
        elif direction['x'] >= 1 and direction['y'] == 0: mc.strafe_right(speed * 2)
        elif direction['x'] <= -1 and direction['y'] == 0: mc.strafe_left(speed * 2)
        
        elif direction['x'] >= 1 and direction['y'] >= 1: mc.right_forward(speed * 2)
        elif direction['x'] >= 1 and direction['y'] <= -1: mc.right_reverse(speed * 2)
        elif direction['x'] <= -1 and direction['y'] >= 1: mc.left_forward(speed * 2)
        elif direction['x'] <= -1 and direction['y'] <= -1: mc.left_reverse(speed * 2)
        
    mc.stop()
    GPIO.cleanup()


