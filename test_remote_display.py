# # import cv2
# # import numpy as np
# # import socket
# # import sys
# # import pickle
# # import struct ### new code
# # cap=cv2.VideoCapture(0)

# # ips = [i[4][0] for i in socket.getaddrinfo(socket.gethostname(), None)]
# # print(ips)


# # clientsocket=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
# # clientsocket.bind(("127.0.1.1", 8089))
# # while True:
# #     ret,frame=cap.read()
# #     data = pickle.dumps(frame) ### new code
# #     clientsocket.send(data)
# #     #clientsocket.sendall(struct.pack("H", 45956)) ### new code
    

# import PiMotor
# import cv2

# ir1 = PiMotor.Sensor("IR1", 1)
# ir2 = PiMotor.Sensor("ULTRASONIC", 1)
# ir3 = PiMotor.Sensor("IR2", 1)

# while True:
#     ir1.iRCheck()
#     ir2.iRCheck()
#     ir3.iRCheck()

#     print(ir1.Triggered, ir2.Triggered, ir3.Triggered)

# import cv2
# from colour_detector import ColourDetector
# from blob_detector import BlobDetector

# vid = cv2.VideoCapture(0)
# col = ColourDetector()
# blob = BlobDetector()

# while True:
#     res, frame = vid.read()
#     if res:
#         col.process_image(frame)
#         blob.process_image(col.red_mask)
#         cv2.imshow("blobs", col.red_channel)
#         cv2.waitKey(1)

from class_lidar2 import LidarDetector
import json

lidar = LidarDetector("/dev/ttyUSB0")

with open("data.txt", "a") as file:
    file.write(json.dumps(lidar.get_scan()))
    file.write("\n")
