#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 10
#define DHTTYPE DHT11

DHT sensor(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  sensor.begin();

  lcd.init();
  lcd.backlight();
}

void loop() {
  delay(2500);
  lcd.setCursor(0, 0);
  lcd.print("HUMEDAD: ");
  lcd.print(sensor.readHumidity());
  lcd.setCursor(0, 1);
  lcd.print("TEMPERATURA: ");
  lcd.print(sensor.readTemperature());
}