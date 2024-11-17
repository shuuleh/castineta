// Pines en Arduino Uno
const int A = 8;
const int B = 7;
const int C = 6;
const int D = 5;

const int S0M1 = 2;
const int S1M1 = 3;
const int S0M2 = 4;
const int S1M2 = 9;
const int S0M3 = 10;
const int S1M3 = 11;
const int S0M4 = 12;
const int S1M4 = 13;

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
 

 
  

  // Movimiento 1
  if (digitalRead(A) == LOW && digitalRead(B) == LOW && digitalRead(C) == LOW && digitalRead(D) == HIGH) {
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, HIGH);
  }
  // Movimiento 2
  else if (digitalRead(A) == LOW && digitalRead(B) == LOW && digitalRead(C) == HIGH && digitalRead(D) == HIGH) {
    digitalWrite(S0M1, HIGH); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, HIGH); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, HIGH); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, HIGH); digitalWrite(S1M4, LOW);
  }
  // Movimiento 3
  else if (digitalRead(A) == LOW && digitalRead(B) == LOW && digitalRead(C) == HIGH && digitalRead(D) == LOW) {
    digitalWrite(S0M1, HIGH); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, HIGH); digitalWrite(S1M4, LOW);
  }
  // Movimiento 4
  else if (digitalRead(A) == LOW && digitalRead(B) == HIGH && digitalRead(C) == HIGH && digitalRead(D) == LOW) {
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, HIGH); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, HIGH); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, HIGH);
  }
  // Movimiento 5
  else if (digitalRead(A) == LOW && digitalRead(B) == HIGH && digitalRead(C) == HIGH && digitalRead(D) == HIGH) {
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, LOW);
  }
  // Movimiento 6
  else if (digitalRead(A) == LOW && digitalRead(B) == HIGH && digitalRead(C) == LOW && digitalRead(D) == HIGH) {
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, HIGH);
  }
  // Movimiento 7
  else if (digitalRead(A) == LOW && digitalRead(B) == HIGH && digitalRead(C) == LOW && digitalRead(D) == LOW) {
    digitalWrite(S0M1, LOW); digitalWrite(S1M1, HIGH);
    digitalWrite(S0M2, HIGH); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, HIGH);
    digitalWrite(S0M4, HIGH); digitalWrite(S1M4, LOW);
  }
  // Movimiento 8
  else if (digitalRead(A) == HIGH && digitalRead(B) == HIGH && digitalRead(C) == LOW && digitalRead(D) == LOW) {
    digitalWrite(S0M1, HIGH); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, HIGH);
    digitalWrite(S0M3, HIGH); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, HIGH);
  }
  // Movimiento 0 (inicialización en cero)
 // Inicializo todos los pines de salida en bajo
  digitalWrite(CLOCK_PIN, LOW);
    delay(25);
    digitalWrite(CLOCK_PIN, HIGH);
    delay(25);

    digitalWrite(S0M1, LOW); digitalWrite(S1M1, LOW);
    digitalWrite(S0M2, LOW); digitalWrite(S1M2, LOW);
    digitalWrite(S0M3, LOW); digitalWrite(S1M3, LOW);
    digitalWrite(S0M4, LOW); digitalWrite(S1M4, LOW);
  
   
}
