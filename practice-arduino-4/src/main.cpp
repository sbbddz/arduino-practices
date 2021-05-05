#include <Arduino.h>
#include <Servo.h>

Servo servo;

void setup() {
    servo.attach(13);
}

void loop() {
    for (int pos = 0; pos <= 180; pos += 1) {
        servo.write(pos);
        delay(15);
    }
    for (int pos = 180; pos >= 1; pos -= 1) {
        servo.write(pos);
        delay(25);
    }
}