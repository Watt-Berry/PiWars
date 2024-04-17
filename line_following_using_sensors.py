"""
for line following without kinect need:
motor controller
ir sensors (preferably 3)
    with 3 can have left, middle, right
    with 2 can have left, right, then middle will be the colour sensor
camera -> to check if finished course
"""


from class_motor import MotorController
#from class_arduino import ColourSensor
import PiMotor
import RPi.GPIO as GPIO



if __name__ == "__main__":
    motor_control = MotorController()
    #arduino_read = ArduinoReader()
    ir1 = PiMotor.Sensor("IR1", 1000) #left
    ir2 = PiMotor.Sensor("IR2", 1000) #middle
    ir3 = 11 #right
    GPIO.setwarnings(False)
    GPIO.setup(ir3, GPIO.IN)

    speed = 50
	
    # change to checking if no path left in front using camera
    while True:
        # get data from ir sensors
        ir1.iRCheck()
        ir2.iRCheck()

        left_val = ir1.Triggered
        mid_val = ir2.Triggered
        right_val = GPIO.input(ir3)

        # Triggered True means sees black, False means sees white
        if not left_val and not mid_val and not right_val: #WWW
            motor_control.stop()
            break
        elif not left_val and not mid_val and right_val: #WWB
            motor_control.turn_right(speed)
        elif not left_val and mid_val and not right_val: #WBW
            motor_control.move_forward(speed)
        elif not left_val and mid_val and right_val: #WBB
            motor_control.right_forward(speed / 2)
        elif left_val and not mid_val and not right_val: #BWW
            motor_control.turn_left(speed)
        elif left_val and not mid_val and right_val: #BWB
            motor_control.move_backward(speed / 5)
        elif left_val and mid_val and not right_val: #BBW
            motor_control.left_forward(speed / 2)
        elif left_val and mid_val and right_val: #BBB
            motor_control.turn_right(100)

    motor_control.move_forward(25)
    motor_control.stop()
        
