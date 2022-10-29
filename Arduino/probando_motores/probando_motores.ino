/*******************************************************/
/*                    AXIOMA ROBOT                      /
  /*******************************************************/


//Motor derecho pwm y velocidad
int MA1 = 4;       //Adelante
int MA2 = 7;       //Atras
int vLeft = 180;   //Velocidad

//Motor izquierdo pwm y velocidad
int MB1 = 9;       //Adelante
int MB2 = 12;       //Atras
int vRight = 180;   //Velocidad

// Servos camara
int camX = A4;
int camY = A5;

//Sensores de proximidad
int sLeft = A2;
int sRight = A3;

// Configuraciones
void setup() {
  Serial.begin(9600); //Comunicación serial con la Raspberry PI
  pinMode(MA1,OUTPUT);
  pinMode(MA2,OUTPUT);
  pinMode(MB1,OUTPUT);
  pinMode(MB2,OUTPUT);

  pinMode(28,OUTPUT);
  pinMode(29,OUTPUT);
  pinMode(30,OUTPUT);
  pinMode(31,OUTPUT);
  pinMode(32,OUTPUT);
  pinMode(33,OUTPUT);
  pinMode(34,OUTPUT);
  pinMode(35,OUTPUT);
  pinMode(36,OUTPUT);
  pinMode(37,OUTPUT);
  pinMode(38,OUTPUT);
  pinMode(39,OUTPUT);
  pinMode(40,OUTPUT);
  pinMode(41,OUTPUT);
}

//Función principal
void loop() {


//    digitalWrite(MB1,HIGH);
//    digitalWrite(MB2,HIGH);
//    digitalWrite(MA1,HIGH);
//    digitalWrite(MA2,HIGH);

    analogWrite(MB1,vLeft);
    analogWrite(MB2,vLeft);
    analogWrite(MA1,vLeft);
    analogWrite(MA2,vLeft);

}
