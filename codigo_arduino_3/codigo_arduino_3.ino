/*
0000 : MOV 0 : nada
0001 : MOV 1 : adelante
0011 : MOV 2 : atras
0010 :
0110 : MOV 3 : izquierda
0111 : MOV 5 : diagonal izquierda adelante
0101 : MOV 9 : diagonal izquierda atras
0100 : MOV 8 : rotacion iquierda
1100 : MOV 4 : derecha
1101 : MOV 6 : diagonal derecha adelante
1111 : MOV 10 : diagonal derecha atras
1110 : MOV 7 : rotacion derecha
1010 :
1011 :
1001 :
1000 :

Los pines analógicos tienen asignados números digitales adicionales:
A0 : pin 14 : RELE 1 CONTROLA MOTOR 1 Y 3
A1 : pin 15 : RELE 2 CONTROLA MOTOR 2 Y 4

 */

// Pines en Arduino Uno

//Entradas
const int A = 8;
const int B = 7;
const int C = 6;
const int D = 5;

//Salida a ruedas
const int S0M1 = 2;
const int S1M1 = 3;
const int S0M2 = 4;
const int S1M2 = 9;
const int S0M3 = 10;
const int S1M3 = 11;
const int S0M4 = 12;
const int S1M4 = 13;

//Salida a reles
const int R1 = 14;
const int R2 = 15;

// Pin para la señal de clock de 1 kHz
const int CLOCK_PIN = 1;
unsigned long lastClockToggle = 0;  // Variable para el tiempo del último cambio de estado
bool clockState = LOW;              // Estado actual del reloj

void setup() {
  // Configuro los pines de entrada
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  
  // Configuro los pines de salida
  pinMode(S0M1, OUTPUT);
  pinMode(S1M1, OUTPUT);
  pinMode(S0M2, OUTPUT);
  pinMode(S1M2, OUTPUT);
  pinMode(S0M3, OUTPUT);
  pinMode(S1M3, OUTPUT);
  pinMode(S0M4, OUTPUT);
  pinMode(S1M4, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);

  // Configuro el pin del reloj como salida
  pinMode(CLOCK_PIN, OUTPUT);

  digitalWrite(S0M1, HIGH);
  digitalWrite(S1M1, HIGH);
  digitalWrite(S0M2, HIGH);
  digitalWrite(S1M2, HIGH);
  digitalWrite(S0M3, HIGH);
  digitalWrite(S1M3, HIGH);
  digitalWrite(S0M4, HIGH);
  digitalWrite(S1M4, HIGH);
  digitalWrite(R1, LOW);
  digitalWrite(R2, LOW);

 // Alterna entre HIGH y LOW
    digitalWrite(CLOCK_PIN, LOW);
    delay(100);
    digitalWrite(CLOCK_PIN, HIGH);
    delay(100);
    digitalWrite(CLOCK_PIN, LOW);
    delay(100);
    digitalWrite(CLOCK_PIN, HIGH);
    delay(100);
    digitalWrite(CLOCK_PIN, LOW); // Actualiza el pin del reloj
      digitalWrite(S0M1, LOW);
  digitalWrite(S1M1, LOW);
  digitalWrite(S0M2, LOW);
  digitalWrite(S1M2, LOW);
  digitalWrite(S0M3, LOW);
  digitalWrite(S1M3, LOW);
  digitalWrite(S0M4, LOW);
  digitalWrite(S1M4, LOW);
  }


void loop() {
   // Generar señal de reloj de 1 kHz

  // Movimiento 1--ADELANTE
  if (digitalRead(A) == LOW && digitalRead(B) == LOW && digitalRead(C) == LOW && digitalRead(D) == HIGH) {
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, HIGH);
    
    digitalWrite(R1, HIGH); digitalWrite(R2, HIGH);
  }
  // Movimiento 2--ATRAS
  else if (digitalRead(A) == LOW && digitalRead(B) == LOW && digitalRead(C) == HIGH && digitalRead(D) == HIGH) {
    digitalWrite(S0M1, HIGH); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, HIGH); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, HIGH); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, HIGH); digitalWrite(S1M4, LOW);
    
    digitalWrite(R1, HIGH); digitalWrite(R2, HIGH);
  }
  // Movimiento 3--IZQUIERDA
  else if (digitalRead(A) == LOW && digitalRead(B) == HIGH && digitalRead(C) == HIGH && digitalRead(D) == LOW) {
    digitalWrite(S0M1, HIGH); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, HIGH); digitalWrite(S1M4, LOW);
    
    digitalWrite(R1, HIGH); digitalWrite(R2, HIGH);
  }
  // Movimiento 4--DERECHA
  else if (digitalRead(A) == HIGH && digitalRead(B) == HIGH && digitalRead(C) == LOW && digitalRead(D) == LOW) {
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, HIGH); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, HIGH); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, HIGH);
    
    digitalWrite(R1, HIGH); digitalWrite(R2, HIGH);
  }
  // Movimiento 5--DIAG IZQ ADELANTE
  else if (digitalRead(A) == LOW && digitalRead(B) == HIGH && digitalRead(C) == HIGH && digitalRead(D) == HIGH) {
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, LOW);
    
    digitalWrite(R1, HIGH); digitalWrite(R2, LOW);
  }
  // Movimiento 6--DIAG DERECHA ADELANTE
  else if (digitalRead(A) == HIGH && digitalRead(B) == HIGH && digitalRead(C) == LOW && digitalRead(D) == HIGH) {
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, HIGH);
    
    digitalWrite(R1, LOW); digitalWrite(R2, HIGH);
  }
  // Movimiento 7--ROT DERECHA
  else if (digitalRead(A) == HIGH && digitalRead(B) == HIGH && digitalRead(C) == HIGH && digitalRead(D) == LOW) {
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, HIGH); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, HIGH); digitalWrite(S1M4, LOW);
    
    digitalWrite(R1, HIGH); digitalWrite(R2, HIGH);
  }
  // Movimiento 8--ROT IZQUIERDA
  else if (digitalRead(A) == LOW && digitalRead(B) == HIGH && digitalRead(C) == LOW && digitalRead(D) == LOW) {
    digitalWrite(S0M1, HIGH); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, HIGH); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, HIGH);
    
    digitalWrite(R1, HIGH); digitalWrite(R2, HIGH);
  }
  // Movimiento 9--DIAG IZQ ATRAS
  else if (digitalRead(A) == LOW && digitalRead(B) == HIGH && digitalRead(C) == LOW && digitalRead(D) == HIGH) {
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, HIGH); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, HIGH); digitalWrite(S1M4, LOW);
    
    digitalWrite(R1, HIGH); digitalWrite(R2, LOW);
  }
  // Movimiento 10--DIAG DER ATRAS
  else if (digitalRead(A) == HIGH && digitalRead(B) == HIGH && digitalRead(C) == HIGH && digitalRead(D) == HIGH) {
    digitalWrite(S0M1, HIGH); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, HIGH); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, LOW);

    digitalWrite(R1, LOW); digitalWrite(R2, HIGH);
  }

  
  // Movimiento 0 (inicialización en cero)
 // Inicializo todos los pines de salida en bajo
  digitalWrite(CLOCK_PIN, LOW);
    delay(25);
    digitalWrite(CLOCK_PIN, HIGH);
    delay(25);
    if (digitalRead(A) == LOW && digitalRead(B) == LOW && digitalRead(C) == LOW && digitalRead(D) == LOW) {
   
    digitalWrite(R1, LOW); digitalWrite(R2, LOW);
   }
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, LOW);
  
   
}
