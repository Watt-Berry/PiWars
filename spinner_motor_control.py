import RPi.GPIO as GPIO


#p5
#p6

class Spinner():
    def __init__(self):
        self.INT1 = 36
        self.INT2 = 37

        GPIO.setmode(GPIO.BOARD)
        GPIO.setwarnings(False)
        GPIO.setup(self.INT1, GPIO.OUT)
        GPIO.setup(self.INT2, GPIO.OUT)

    def forward(self):
        GPIO.output(self.INT1, True)
        GPIO.output(self.INT2, False)

    def backwards(self):
        GPIO.output(self.INT1, False)
        GPIO.output(self.INT2, True)

    def off(self):
        GPIO.output(self.INT1, False)
        GPIO.output(self.INT2, False)

if __name__ == "__main__":
	spinner = Spinner()
	try:
		while True:
			spinner.forward()
		spinner.off()
	except: spinner.off()
