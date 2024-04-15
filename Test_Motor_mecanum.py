#!/usr/bin/python

import PiMotor
import time
import RPi.GPIO as GPIO
from spinner_motor_control import Spinner


spinner = Spinner()

#Name of Individual MOTORS 
m1 = PiMotor.Motor("MOTOR3",1)
m2 = PiMotor.Motor("MOTOR4",1)
m3 = PiMotor.Motor("MOTOR1",1)
m4 = PiMotor.Motor("MOTOR2",1)

#To drive all motors together
motorAll = PiMotor.LinkedMotors(m1,m2,m3,m4)

#Names for Individual Arrows
ab = PiMotor.Arrow(1)
al = PiMotor.Arrow(2)
af = PiMotor.Arrow(3) 
ar = PiMotor.Arrow(4)

##This segment drives the motors in the direction listed below:
## forward and reverse takes speed in percentage(0-100)

try:
    while True:
#-----------To Drive the Motors Forward------------# 
        print("Robot Moving Forward ")
        af.on()
        motorAll.forward(20)
        time.sleep(5)
#--------------------------------------------------#

#-----------To Drive the Motors backwards------------# 
        print("Robot Moving Backward ")
        af.off()
        ab.on()
        motorAll.reverse(20)
        time.sleep(5)
#--------------------------------------------------#

#-----------To Drive the Motors Left---------------#
        print("Robot Moving Left ")
        ab.off()
        al.on()
        m1.reverse(50)
        m2.forward(50)
        m3.forward(50)
        m4.reverse(50)
        time.sleep(5)
#--------------------------------------------------#

#----------To Drive the Motors Right---------------#
        print("Robot Moving Right ")
        ar.on()
        al.off()
        m1.forward(50)
        m2.reverse(50)
        m3.reverse(50)
        m4.forward(50)
        time.sleep(5)
#-------------------------------------------------#

#----------To Drive the Motors Diagonally Right Forward---------------#
        print("Robot Moving Diagonally Right Forward ")
        m1.stop()
        m2.forward(50)
        m3.forward(50)
        m4.stop()
        time.sleep(5)
#-------------------------------------------------#

#----------To Drive the Motors Diagonally Left Forward---------------#
        print("Robot Moving Diagonally Left Forward ")
        m1.forward(50)
        m2.stop()
        m3.stop()
        m4.forward(50)
        time.sleep(5)
#-------------------------------------------------#

#----------To Drive the Motors Diagonally Right Reverse---------------#
        print("Robot Moving Diagonally Right Reverse ")
        m1.reverse(50)
        m2.stop()
        m3.stop()
        m4.reverse(50)
        time.sleep(5)
#-------------------------------------------------#

#----------To Drive the Motors Diagonally Left Reverse---------------#
        print("Robot Moving Diagonally Left Reverse ")
        m1.stop()
        m2.reverse(50)
        m3.reverse(50)
        m4.stop()
        time.sleep(5)
#-------------------------------------------------#

#---------To Stop the Motors----------------------#
        print("Robot Stop ")
        al.off()
        af.off()
        ar.off()
        motorAll.stop()
        time.sleep(5)
#-------------------------------------------------#

        
except KeyboardInterrupt:
    spinner.off()
    GPIO.cleanup()

    
