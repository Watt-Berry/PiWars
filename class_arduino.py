import serial
import RPi.GPIO as GPIO
import PiMotor
import time

class ArduinoReader():
    def __init__(self):
        self.ser = serial.Serial("/dev/ttyUSB0", baudrate=9600, timeout=5)
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
        if colour[0] - min(colour) >= 45:
            return True
        return False

# needs to be started/ stopped until it works -> FIX THIS

if __name__ == "__main__":
    try:
        reader = ArduinoReader()
        while True:
            colour = reader.read_colour()
            print(colour)
            if colour:
                print(reader.is_red(colour))
    except KeyboardInterrupt:
        pass
    reader.ser.close()
    reader.ser.reset_input_buffer()
    reader.ser.reset_output_buffer()
    
