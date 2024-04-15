import RPi.GPIO as GPIO
import time

class UltrasonicSensor():
    def __init__(self):
        GPIO.setmode(GPIO.BOARD)
        GPIO.setwarnings(False)
        self.TRIG = 29
        self.ECHO = 31
        
        GPIO.setup(self.TRIG, GPIO.OUT)
        GPIO.setup(self.ECHO, GPIO.IN)
        
    # returns distance in CM
    def get_distance(self):
        GPIO.output(self.TRIG, False)
        time.sleep(0.1)
        GPIO.output(self.TRIG, True)
        time.sleep(0.001)
        GPIO.output(self.TRIG, False)
        
        pulse_start = pulse_end = 0
        
        while GPIO.input(self.ECHO) == 0:
            pulse_start = time.time()
        while GPIO.input(self.ECHO) == 1:
            pulse_end = time.time()

        pulse_duration = pulse_end - pulse_start
        
        return round((pulse_duration * 34300)/2, 2)

if __name__ == "__main__":
    sensor = UltrasonicSensor()
    
    while True:
        dist = sensor.get_distance()
        print(dist)
        time.sleep(1)
        