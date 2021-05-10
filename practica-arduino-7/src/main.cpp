#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 10
#define DHTTYPE DHT11

DHT sensor(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  sensor.begin();
}

void loop() {
  delay(2500);
  Serial.print("Humedad: ");
  Serial.println(sensor.readHumidity());
  Serial.print("Temperatura: ");
  Serial.println(sensor.readTemperature());
}