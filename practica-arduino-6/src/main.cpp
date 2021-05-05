#include <Arduino.h>

#define TRIGGER 9 
#define ECHO 10

int tiem, dis;

void setup() {
    pinMode(TRIGGER, OUTPUT);
    pinMode(ECHO, INPUT);
    pinMode(6, OUTPUT);
    digitalWrite(TRIGGER, LOW);
}

void loop() {
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10);          
  digitalWrite(TRIGGER, LOW);

  int t = pulseIn(ECHO, HIGH);
  int d = t/59;

  if (d < 50) {
      tone(6, 3000);
  } else if (d < 20) {
      tone(6, 2000);
  } else if (d < 100) {
      tone(6, 1000);
  } else {
      noTone(6);
  }
  
  Serial.print("Distancia recibida: ");
  Serial.print(d);
  delay(100);
}