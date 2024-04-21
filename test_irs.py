import PiMotor

ir1 = PiMotor.Sensor("IR1", 1)
ir2 = PiMotor.Sensor("ULTRASONIC", 1)
ir3 = PiMotor.Sensor("IR2", 1)

while True:
	ir1.iRCheck()
	ir2.iRCheck()
	ir3.iRCheck()
	print(ir1.Triggered, ir2.Triggered, ir3.Triggered)
