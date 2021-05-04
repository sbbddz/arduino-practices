#include <Arduino.h>
#include <notes.h> // Notes library borrowed from arduino.cc

#define LEDGREEN 13
#define LEDRED 12
#define LEDBLUE 11
#define LEDWHITE 10
#define SPEAKER 9

int leds[] = {LEDGREEN, LEDRED, LEDBLUE, LEDWHITE};

int melody[] = {
  NOTE_A4, NOTE_D4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_D4, NOTE_F4, NOTE_G4, NOTE_E4
};

void setup() {
    for (int i = 0; i < 4; i++) {
        pinMode(leds[i], OUTPUT);
    }

    pinMode(SPEAKER, OUTPUT);
}

void loop() {
    for (int i = 0; i < 5; i++) {
        digitalWrite(leds[i], HIGH);
        delay(100);
        digitalWrite(leds[i], LOW);
    }

    for (int i = 0; i < 10; i++) {
        tone(SPEAKER, melody[i]);
        delay(500);
    }
}