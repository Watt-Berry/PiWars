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