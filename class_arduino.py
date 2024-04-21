import serial
import RPi.GPIO as GPIO
import PiMotor
import time

class ColourSensor():
    def __init__(self, port):
        self.port = port
        self.ser = serial.Serial(self.port, 9600, timeout=1)
        
    def read_colour(self):
        try:
            data = self.ser.readline().decode('utf-8').rstrip()

            reader.ser.reset_input_buffer()
            reader.ser.reset_output_buffer()

            return [int(x) for x in data.split(",")]
        except:
            return None
    
    # white = 246, 241, 248
    # black = 252 220 230

    def is_red(self, colour):
        # TODO: CALIBRATE THESE VALUES FOR MINESWEEPER
        # 251, 217, 223 += 3
        if 247 < colour[0] < 254:
            if 213 < colour[1] < 221:
                if 219 < colour[2] < 227:
                    return True
        return False
    
    def is_blue(self, colour):
        # TODO: CALIBRATE THIS FOR ECO DISASTER
        # 247, 247, 247 += 5
        if 245 < colour[0] < 249:
            if 245 < colour[1] < 249:
                if 245 < colour[2] < 249:
                    return True
        return False

    def is_yellow(self, colour):
        # TODO: CALIBRATE THIS FOR ECO DISASTER
        # 235, 240, 241 += 5
        if 233 < colour[0] < 237:
            if 238 < colour[1] < 242:
                if 239 < colour[2] < 243:
                    return True
        return False        

# needs to be started/ stopped until it works -> FIX THIS

if __name__ == "__main__":
    reader = ColourSensor("/dev/ttyUSB1")
    history = []
    while True:
        try:
            colour = reader.read_colour()
            print(colour)
            # if colour:
            #     print(reader.is_red(colour))
            # if colour:
            #     print(reader.is_blue(colour))
            # if colour:
            #     print(reader.is_yellow(colour))


        except KeyboardInterrupt:
            break
    reader.ser.close()
    reader.ser.reset_input_buffer()
    reader.ser.reset_output_buffer()
    
