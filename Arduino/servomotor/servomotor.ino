// Incluímos la librería para poder controlar el servo
#include <Servo.h>
 
// Declaramos la variable para controlar el servo
Servo servoMotor;
 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(5);
}
 
void loop() {
  
  // Desplazamos a la posición 0º
  servoMotor.write(0);
  delay(500);
  
  // Desplazamos a la posición 45°
  servoMotor.write(45);
  delay(500);
  
  // Desplazamos a la posición 90°
  servoMotor.write(90);
  delay(500);

    // Desplazamos a la posición 120°
  servoMotor.write(120);
  delay(500);
}
