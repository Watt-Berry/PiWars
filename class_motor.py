#!/usr/bin/python

import PiMotor
import time
import RPi.GPIO as GPIO


class MotorController():
    def __init__(self):
        GPIO.cleanup()
        #Name of Individual MOTORS
        # CHANGE NAMES BASED ON HOW ITS WIRED
        self.m1 = PiMotor.Motor("MOTOR1",1) # top right
        self.m2 = PiMotor.Motor("MOTOR2",1) # bottom right
        self.m3 = PiMotor.Motor("MOTOR3",1) # top left
        self.m4 = PiMotor.Motor("MOTOR4",1) # bottom left

        #To drive all motors together
        self.motorLeft = PiMotor.LinkedMotors(self.m3, self.m4)
        self.motorRight = PiMotor.LinkedMotors(self.m1, self.m2)
        self.motorAll = PiMotor.LinkedMotors(self.m1, self.m2, self.m3, self.m4)

        #Names for Individual Arrows
        self.ab = PiMotor.Arrow(1)
        self.al = PiMotor.Arrow(2)
        self.af = PiMotor.Arrow(3) 
        self.ar = PiMotor.Arrow(4)
            
    def move_forward(self, speed: int = 100):
        #print("Robot Moving Forward: speed=", speed)
        self.af.on()
        self.motorAll.forward(speed)
        
    def move_backward(self, speed: int = 100):
        #print("Robot Moving Backward: speed=", speed)
        self.af.off()
        self.ab.on()
        self.motorAll.reverse(speed)
        
    def turn_left(self, speed: int = 100):
        #print("Robot Moving Left: speed=", speed)
        self.al.on()
        self.motorRight.forward(speed)
        self.motorLeft.reverse(speed)
        
    def turn_right(self, speed: int = 100):
        #print("Robot Moving Right: speed=", speed)
        self.ar.on()
        self.motorRight.reverse(speed)
        self.motorLeft.forward(speed)

    def strafe_left(self, speed: int = 100):
        #print("Robot strafing left: speed=", speed)
        self.al.on()
        
        self.m1.forward(speed)
        self.m4.forward(speed)
        
        self.m2.reverse(speed)
        self.m3.reverse(speed)

    def strafe_right(self, speed: int = 100):
        #print("Robot strafing right: speed=", speed)
        self.ar.on()
        
        self.m2.forward(speed)
        self.m3.forward(speed)
        
        self.m1.reverse(speed)
        self.m4.reverse(speed)

    def left_forward(self, speed: int = 100):
        #print("Rot left forward")
        self.m1.forward(speed)
        self.m4.forward(speed)
        self.m2.stop()
        self.m3.stop()

    def right_forward(self, speed: int = 100):
        #print("RObot right forward")
        self.m2.forward(speed)
        self.m3.forward(speed)
        self.m1.stop()
        self.m4.stop()       

    def right_reverse(self, speed: int = 100):
        #print("RObot right reverse")
        self.m1.reverse(speed)
        self.m4.reverse(speed)
        self.m2.stop()
        self.m3.stop()

    def left_reverse(self, speed: int = 100):
        #print("Robot left reverse")
        self.m2.reverse(speed)
        self.m3.reverse(speed)
        self.m1.stop()
        self.m4.stop()
    
    def stop(self):
        #print("Robot Stop ")
        self.al.off()
        self.af.off()
        self.ar.off()
        self.ab.off()
        self.motorAll.stop()


# CAN USE THIS CLASS FOR THE SHOOTING GAME TO REMOTE CONTROL,
# TODO: add in key presses to shoot?

# from pynput.keyboard import Key, Listener

# def on_press(key):
#     global direction, rotation, speed
#     try:
#         print(key, "was pressed")
#         # handle movement presses
#         if key.char == 'w':
#             direction['y'] += 1
#         elif key.char == 's':
#             direction['y'] -= 1
#         elif key.char == 'a':
#             direction['x'] -= 1
#         elif key.char == 'd':
#             direction['x'] += 1
        
#         #handle rotation presses
#         elif key.char == 'q':
#             rotation -= 1
#         elif key.char == 'e':
#             rotation += 1
            
#         #handle speed changes
#         elif key.char == '1':
#             #print("speed down")
#             speed = max(0, speed - 10)
#         elif key.char == '2':
#             #print("speed up")
#             speed= min(100, speed + 10)
            
#     except AttributeError:
#         print("invalid key was pressed")
        
# def on_release(key):
#     global direction, rotation
#     if key == Key.esc:
#             return false
    
#     try:
#         # read key
#         # reset the directional axis when a key along the axis is released
#         if key.char in ['w', 's']:
#             direction['y'] = 0
#         elif key.char in ['a', 'd']:
#             direction['x'] = 0
#         elif key.char in ['q', 'e']:
#             rotation = 0 
#     except:
#         print("invalid key released")

# # README: wasd for movement, q to turn left, e to turn right, esc to stop
# # RUN THIS ONLY if switching to remote control

# if __name__ == "__main__":
#     mc = MotorController()
#     #spinner = Spinner()
#     #distance_sensor = UltrasonicSensor()
#     #arduino = ArduinoReader()
#     direction = {'x': 0, 'y': 0} #2-index arr for storing x and y
#     rotation = 0 # -1 for left 0 for still 1 for right
#     speed = 50
    
#     listener = Listener(
#         on_press=on_press,
#         on_release=on_release)
#     listener.daemon = False
#     listener.start()
    
#     while listener.running:
#         pass
#         print(direction)
#         print(rotation)
#         print(speed)
        
#         # read rotation
#         if rotation == 0: mc.stop()
#         elif rotation <= -1: mc.turn_left(speed)
#         elif rotation >= 1: mc.turn_right(speed)
        
#         # read direction
#         if direction['x'] == 0 and direction['y'] == 0: mc.stop()
        
#         elif direction['x'] == 0 and direction['y'] >= 1: mc.move_forward(speed)
#         elif direction['x'] == 0 and direction['y'] <= -1: mc.move_backward(speed)
#         elif direction['x'] >= 1 and direction['y'] == 0: mc.strafe_right(speed)
#         elif direction['x'] <= -1 and direction['y'] == 0: mc.strafe_left(speed)
        
#         elif direction['x'] >= 1 and direction['y'] >= 1: mc.right_forward(speed)
#         elif direction['x'] >= 1 and direction['y'] <= -1: mc.right_reverse(speed)
#         elif direction['x'] <= -1 and direction['y'] >= 1: mc.left_forward(speed)
#         elif direction['x'] <= -1 and direction['y'] <= -1: mc.left_reverse(speed)
        
#     mc.stop()
#     GPIO.cleanup()
        