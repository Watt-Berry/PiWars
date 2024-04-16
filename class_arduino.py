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

def setup_reader() -> ArduinoReader:
    reader = ArduinoReader()
    return reader

if __name__ == "__main__":
    while True:
        history = []
        reader = setup_reader()
        try:
            while True:
                colour = reader.read_colour()
                history.append(colour)
                print(colour)
                if colour:
                    print(reader.is_red(colour))
                if len(history) > 50 and history[0] == history[-1]:
                    raise Exception
        except KeyboardInterrupt:
            break
        except Exception as e:
            print(e)
            reader.ser.close()
            time.sleep(2)
            continue
    reader.ser.close()
    reader.ser.reset_input_buffer()
    reader.ser.reset_output_buffer()
    
