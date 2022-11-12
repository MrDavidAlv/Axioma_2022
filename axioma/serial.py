import serial
ser = serial.Serial('COM4', 9600)
ser.write("hello world!")
ser.close()

# from time import sleep
# import serial

# microcontrolador = serial.Serial(port='COM4', baudrate=9600)

# while True:
#     comando = input("Introduce un comando")
#     microcontrolador.write(comando.encode())
#     if comando == 'H':
#         print("Led Encendido")
#     elif comando == 'L':
#         print("Led Apagado")

# microcontrolador.close()
