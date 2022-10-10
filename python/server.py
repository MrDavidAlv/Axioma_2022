import cv2
import io
import socket
import struct
import time
import pickle
import zlib

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((socket.gethostname(), 1234))
s.listen(5)

cam = cv2.VideoCapture(0)

cam.set(3, 320);
cam.set(4, 240);

img_counter = 0

encode_param = [int(cv2.IMWRITE_JPEG_QUALITY), 100]

while True:
    client_socket, address = s.accept()
    print(f"Connection from {address} has been established!")

    ret, frame = cam.read()
    result, frame = cv2.imencode('.jpg', frame, encode_param)

    data = pickle.dumps(frame, 0)
    size = len(data)

    print("{}: {}".format(img_counter, size))
    client_socket.send(struct.pack(">L", size) + data)
    print("ooga")
    img_counter += 1

cam.release()