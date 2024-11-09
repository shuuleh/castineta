/*espacio para boludeces
Acordate giuli que esto es c++ jajaj

Espero haber entendido bien las instrucciones de lezca
Entradas: A, B , C, D
Salidas: S0M1, S1M1, S0M2, S1M2, S0M3, S1M3, S0M4, S1M4

A:D0
B:D1
C:D2
D:D3

S0M1:D4
S1M1:D5
S0M2:D6
S1M2:D7
S0M3:D8
S1M3:SD2
S0M4:SD3
S1M4:RX ACORDATE DE DESCONECTAR PARA CARGAR LA PLAQUETA
R1 y R2: Los hago fuera de la placa rey me quede sin pines

*/

const int A = 16;
const int B = 5;
const int C = 4;
const int D = 0;

const int S0M1 = 2;
const int S1M1 = 14;
const int S0M2 = 12;
const int S1M2 = 13;
const int S0M3 = 15;
const int S1M3 = 9;
const int S0M4 = 10;
const int S1M4 = 3;


void setup() {
  
  //Configuro los pines
   pinMode(A, INPUT);
   pinMode(B, INPUT);
   pinMode(C, INPUT);
   pinMode(D, INPUT);
   
   pinMode(S0M1, OUTPUT);
   pinMode(S1M1, OUTPUT);
   pinMode(S0M2, OUTPUT);
   pinMode(S1M2, OUTPUT);
   pinMode(S0M3, OUTPUT);
   pinMode(S1M3, OUTPUT);
   pinMode(S0M4, OUTPUT);
   pinMode(S1M4, OUTPUT);
   
}

void loop() {
                            //INICIALIZO TODO EN CERO
    digitalWrite(S0M1, LOW);
    digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW);
    digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, LOW);
    digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW);
    digitalWrite(S1M4, LOW);
  
  if (                      //MOVIMIENTO 1
    digitalRead(A) == LOW &&
    digitalRead(B) == LOW &&
    digitalRead(C) == LOW &&
    digitalRead(D) == HIGH
  ) {
    digitalWrite(S0M1, LOW);
    digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, LOW);
    digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, LOW);
    digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, LOW);
    digitalWrite(S1M4, HIGH);
  } else if (               //MOVIMIENTO 2
    digitalRead(A) == LOW &&
    digitalRead(B) == LOW &&
    digitalRead(C) == HIGH &&
    digitalRead(D) == HIGH
  ) {

    digitalWrite(S0M1, HIGH);
    digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, HIGH);
    digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, HIGH);
    digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, HIGH);
    digitalWrite(S1M4, LOW);
  } else if (               //MOVIMIENTO 3
    digitalRead(A) == LOW &&
    digitalRead(B) == LOW &&
    digitalRead(C) == HIGH &&
    digitalRead(D) == LOW
  ) {

    digitalWrite(S0M1, HIGH);
    digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW);
    digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, LOW);
    digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, HIGH);
    digitalWrite(S1M4, LOW);
  } else if (               //MOVIMIENTO 4
    digitalRead(A) == LOW &&
    digitalRead(B) == HIGH &&
    digitalRead(C) == HIGH &&
    digitalRead(D) == LOW
  ) {

    digitalWrite(S0M1, LOW);
    digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, HIGH);
    digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, HIGH);
    digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW);
    digitalWrite(S1M4, HIGH);
  } else if (               //MOVIMIENTO 5
    digitalRead(A) == LOW &&
    digitalRead(B) == HIGH &&
    digitalRead(C) == HIGH &&
    digitalRead(D) == HIGH
  ) {

    digitalWrite(S0M1, LOW);
    digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW);
    digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, LOW);
    digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, LOW);
    digitalWrite(S1M4, LOW);
  } else if (               //MOVIMIENTO 6
    digitalRead(A) == LOW &&
    digitalRead(B) == HIGH &&
    digitalRead(C) == LOW &&
    digitalRead(D) == HIGH
  ) {

    digitalWrite(S0M1, LOW);
    digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, LOW);
    digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, LOW);
    digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW);
    digitalWrite(S1M4, HIGH);
  } else if (               //MOVIMIENTO 7
    digitalRead(A) == LOW &&
    digitalRead(B) == HIGH &&
    digitalRead(C) == LOW &&
    digitalRead(D) == LOW
  ) {

    digitalWrite(S0M1, LOW);
    digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, HIGH);
    digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, LOW);
    digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, HIGH);
    digitalWrite(S1M4, LOW);
  } else if (               //MOVIMIENTO 8
    digitalRead(A) == HIGH &&
    digitalRead(B) == HIGH &&
    digitalRead(C) == LOW &&
    digitalRead(D) == LOW
  ) {

    digitalWrite(S0M1, HIGH);
    digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW);
    digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, HIGH);
    digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW);
    digitalWrite(S1M4, HIGH);
  } else {                 //MOVIMIENTO 0 O ENTRADA NO VALIDA  //ESTO SE DEBERIA PODER SACAR
    digitalWrite(S0M1, LOW);
    digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW);
    digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, LOW);
    digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW);
    digitalWrite(S1M4, LOW);
  }
  }
