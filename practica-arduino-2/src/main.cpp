#include <Arduino.h>

#define GREENPIN 13
#define YELLOWPIN 12
#define BLUEPIN 11

int pins[] = {GREENPIN, YELLOWPIN, BLUEPIN};

void setup() {
    pinMode(GREENPIN, OUTPUT);
    pinMode(YELLOWPIN, OUTPUT);
    pinMode(BLUEPIN, OUTPUT);
}

void loop() {
    for (int i = 0; i < 3; i++) {
      digitalWrite(pins[i], HIGH);
      delay(20);
      digitalWrite(pins[i], LOW);
    }
}