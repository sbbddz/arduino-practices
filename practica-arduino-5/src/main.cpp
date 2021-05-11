#include <Arduino.h>
#include <Servo.h>

#define SERVOPIN 10

Servo servo;
int angulo = 0;

void setup() {
    servo.attach(SERVOPIN);
}

void loop() {
    for (angulo = 0; angulo <= 180; angulo += 1) {
        servo.write(angulo);
        delay(25);
    }
    for (angulo = 180; angulo >= 0; angulo -= 1) {
        servo.write(angulo);
        delay(25);
    }

    delay(200);
}