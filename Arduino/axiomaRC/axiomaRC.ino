/*******************************************************/
/*                    AXIOMA ROBOT                      /
/*******************************************************/
//172.20.2.203
//Motores derecho pwm y velocidad
int MA1 = 4;       //motor delantero
int MA2 = 7;       //motor trasero
int vRight = 180;   //Velocidad
//direccion MA1
int MA1_X = 23; //adelante
int MA1_Y = 25; //atras
//direccion MA2
int MA2_X = 27; //adelante
int MA2_Y = 29; //atras

//Motor izquierdo pwm y velocidad
int MB1 = 9;       //motor delantero
int MB2 = 12;       //motor trasero
int vLeft = 180;   //Velocidad
//direccion MB1
int MB1_X = 22; //adelante
int MB1_Y = 24; //atras
//direccion MB2
int MB2_X = 26; //adelante
int MB2_Y = 28; //atras

// Servos camara
int camX = A4;
int camY = A5;

//Sensores de proximidad
int sLeft = A2;
int sRight = A3;

// Configuraciones
void setup() {
  Serial.begin(9600); //Comunicación serial con la Raspberry PI
  pinMode(MA1, OUTPUT);
  pinMode(MA2, OUTPUT);
  pinMode(MB1, OUTPUT);
  pinMode(MB2, OUTPUT);

  //
  pinMode(MA1_X, OUTPUT);
  pinMode(MA1_Y, OUTPUT);
  pinMode(MA2_X, OUTPUT);
  pinMode(MA2_Y, OUTPUT);

  pinMode(MB1_X, OUTPUT);
  pinMode(MB1_Y, OUTPUT);
  pinMode(MB2_X, OUTPUT);
  pinMode(MB2_Y, OUTPUT);
}

//Función principal
void loop() {
//leftEngineBack();
//leftEngineForward();

  // Lecturas del puerto serial
  if (Serial.available() > 0 ) {
    char dato = Serial.read();
    if (dato == 'J') {
      rightEngineForward();
    }
    else if (dato == 'M') {
      rightEngineBack();
    }
    else if (dato == 'F') {
      leftEngineForward();
    }
    else if (dato == 'C') {
      leftEngineBack();
    }
    else {
      stoped();
    }
  }

}

//motor derecho adelante
void rightEngineForward() {
  digitalWrite(MA1_X, HIGH);
  digitalWrite(MA1_Y, LOW);
  digitalWrite(MA2_X, HIGH);
  digitalWrite(MA2_Y, LOW);
  delay(10);
  analogWrite(MA1, vLeft);
  analogWrite(MA2, vLeft);
}

//motor derecho atras
void rightEngineBack() {
  digitalWrite(MA1_X, LOW);
  digitalWrite(MA1_Y, HIGH);
  digitalWrite(MA2_X, LOW);
  digitalWrite(MA2_Y, HIGH);
  delay(10);
  analogWrite(MA1, vLeft);
  analogWrite(MA2, vLeft);
}

//motor izquierdo adelante
void leftEngineForward() {
  digitalWrite(MB1_X, LOW);
  digitalWrite(MB1_Y, HIGH);
  digitalWrite(MB2_X, HIGH);
  digitalWrite(MB2_Y, LOW);
  delay(10);
  analogWrite(MB1, vRight);
  analogWrite(MB2, vRight);
}

//motor izquierdo atras
void leftEngineBack() {
  digitalWrite(MB1_X, HIGH);
  digitalWrite(MB1_Y, LOW);
  digitalWrite(MB2_X, LOW);
  digitalWrite(MB2_Y, HIGH);
  delay(10);
  analogWrite(MB1, vRight);
  analogWrite(MB2, vRight);
}

//Parar motores
void stoped() {
  analogWrite(MA1, 0);
  analogWrite(MA2, 0);
  analogWrite(MB1, 0);
  analogWrite(MB2, 0);
}
