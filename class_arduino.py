import serial
import RPi.GPIO as GPIO
import PiMotor
import time

class ColourSensor():
    def __init__(self, port):
        self.ser = serial.Serial(port, baudrate=9600, timeout=3)
        self.ser.reset_input_buffer()
        self.ser.reset_output_buffer()

        # keep initiating and resetting colour sensor until its working
        total = [0, 0, 0]
        while True:
            for i in range(15):
                new_col = self.read_colour()
                total[0] += new_col[0]
                total[1] += new_col[1]
                total[2] += new_col[2]
            total[0] /= 15
            total[1] /= 15
            total[2] /= 15
            # check if the sum and last value are the same -> if true then values are not changing and there is an issue so reset
            if total == new_col:
                self.__init__(port)
            else:
                break
        
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
    
    def is_blue(self, colour):
        return colour[2] - min(colour) >= 30

    def is_yellow(self, colour):
        return abs(colour[0] - colour[1]) < 20

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
    
