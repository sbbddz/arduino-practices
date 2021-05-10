#include <Arduino.h>
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
  Serial.println(sensor.readHumidity());
  Serial.println(sensor.readTemperature());
}