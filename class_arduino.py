import serial
import RPi.GPIO as GPIO
import PiMotor
import time

class ColourSensor():
    def __init__(self, port):
        self.ser = serial.Serial(port, baudrate=9600, timeout=5)
        self.ser.reset_input_buffer()
        self.ser.reset_output_buffer()
        
    def read_colour(self):
        # decode the read line into the values that the ir has interpreted
        # return the values
        try:
            data = self.ser.readline().decode('utf-8').rstrip()
        except:
            data = self.ser.readline()
        data = data.split(",")
        self.ser.flush()
        if len(data) < 3:
            return None
        return [int(x) for x in data]
    
    def is_red(self, colour):
        if colour[0] - min(colour) >= 30:
            print("IS RED")
            return True
        return False
    
    def is_green(self, colour):
        if colour[1] - min(colour) >= 30:
            print("IS GREEN")
            return True
        return False
    
    def is_black(self, colour):
        # return true if all are below a certain threshold
        return sum(colour) >= 300

# needs to be started/ stopped until it works -> FIX THIS

if __name__ == "__main__":
    reader = ColourSensor("/dev/ttyUSB0")
    while True:
        try:
            colour = reader.read_colour()
            print(colour)
            if colour:
                #print(reader.is_red(colour))
                #print(reader.is_green(colour))
                print(reader.is_black(colour))
        except KeyboardInterrupt:
            break
    reader.ser.close()
    reader.ser.reset_input_buffer()
    reader.ser.reset_output_buffer()
    
