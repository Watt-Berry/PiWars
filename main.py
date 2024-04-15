from BarrelDetection import BarrelDetection
from class_motor import MotorController
from class_arduino import IRReader 
from class_ultrasonic import UltrasonicSensor
from class_spinner import Spinner
from class_kinect import KinectAccess

#from kinect_video import KinectVideo
#from colour_detector import ColourDetector
#from blob_detector import BlobDetector

# 
# #Name of Individual MOTORS
# m1 = PiMotor.Motor("MOTOR1",1) #Upper left
# m2 = PiMotor.Motor("MOTOR2",1) #Upper Right
# m3 = PiMotor.Motor("MOTOR3",1) #Lower left
# m4 = PiMotor.Motor("MOTOR4",1) #Lower right
# 
# #To drive all motors together
# motorLeft = PiMotor.LinkedMotors(m1,m3)
# motorRight = PiMotor.LinkedMotors(m2,m4)


#video = KinectVideo()
#colour_detec = ColourDetector()
#blob_detec = BlobDetector()

# motorAll = PiMotor.LinkedMotors(m1,m2,m3,m4)

if __name__ == "__main__":
    mc = MotorController()
    irr = IRReader()
    distance_sensor = UltrasonicSensor()
    spinner = Spinner()
    

    spinner.forward()

    
    MAX_DEGREE = 150
    
    while True:
        # get distance and check if too close
        distance = distance_sensor.get_distance()
        # if too close then move back slowly and continue to next lopp
        if distance <= 10.00:
            mc.move_backward(10)
            continue
        
        # get data from ir sensors
        degree = None
        while not degree:
            degree = irr.read_ir()
        # calculate position based on ir data
        if degree < 0:
            mc.turn_left(round(degree / -MAX_DEGREE * 100))
        elif degree > 0:
            mc.turn_right(round(degree / MAX_DEGREE * 100))
        elif degree == 0:
            mc.move_forward(10)
        # move based on ir data
        
        # check colour sensor
        # if green do ?


# while loop
# get data from ir sensors
# send different movement to motor controller based on data
# while True:
#	  # get distance for collision detection
      # distance = distance_sensor.get_distance()
      # get objects in front of robot -> look for large blobs
      # frame = vieo.frame
      # colour_detec.process_image(frame)
      # blob_detec.process_image(colour_detec.base_channel)
      # blobs = blob_detec.blobs
      # check if theres any large above a threshold blobs in the frame
      # robotInFront = blob_detec.exists_large_blobs()
      
      # stop if too close to another object that is not a ball
      # if distance < 10 and robotInFront:
          # mc.stop()
          # continue
#     

#     # get data from arduino
#     data = irr.read_ir()
#     # if too far left then move right
#     # if too far right then move left
#     # if aligned then move forward
#     # only move onto next iteration when movement finished

# 
# 
# def remap(value, min, max, mapMin, mapMax):
#     if value > max:
#         value = max
#     if value < min:
#         value = min
# 
#     remappedValue = (value-min)/(mapMax-mapMin)
#     return remappedValue
# 
# def get_error(current_value, goal):
#     error = goal-current_value
#     return error
# 
# 
# if __name__ == '__main__':
#     myBarrelDetector = BarrelDetection()
#     myBarrelDetector.get_center_coordinates()
#     y = 480/2
#     x = 640/2
#     error_x = get_error(myBarrelDetector.center_coordinates[1], x)
# 
#     while(abs(error_x)>1):
#         speed = remap(abs(error_x), 0, x/2, 0, 100)
# 
#         if error_x > 0: #turn right
#             mc.turn_right(speed)
#             #motorLeft.backward(speed)
#             #motorRight.forward(speed)
#         else: #turn left
#             mc.turn_left(speed)
#             #motorRight.backward(speed)
#             #motorLeft.forward(speed)
# 
#         #time.sleep ?
#         myBarrelDetector.get_center_coordinates()
#         error_x = get_error(myBarrelDetector.center_coordinates[1], x)
# 
#     error_y = get_error(myBarrelDetector.center_coordinates[0], y)
# 
#     while(abs(error_y)>1):
#         speed = remap(abs(error_y), 0, y/2, 0, 100)
# 
#         if error_y > 0: #move backward
#             mc.move_backward(speed)
#             #motorAll.backward(speed)
#         else: #move forward
#             mc.move_forward(speed)
#             #motorAll.forward(speed)
# 
#         # time.sleep ?
#         myBarrelDetector.get_center_coordinates()
#         error_y = get_error(myBarrelDetector.center_coordinates[0], y)
# 
#     error_x = get_error(myBarrelDetector.center_coordinates[1], x)
# 
#     print("error in x : " + error_x)
#     print("error in y : " + error_y)
#     print("object centered")
