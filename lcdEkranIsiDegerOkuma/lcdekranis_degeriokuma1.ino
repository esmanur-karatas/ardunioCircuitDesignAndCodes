#include <LiquidCrystal_I2C.h>
#include <Wire.h>

int sensorPin=A0;
int sensorValue=0;
float voltage=0;
float temperature=0;
LiquidCrystal_I2C lcd(0X27,16,2);

void setup() {
  lcd.init();
  lcd.backlight();

}

void loop() {
sensorValue=analogRead(sensorPin);
voltage=(sensorValue/1024.0)*5000.0;
temperature=voltage/100.0;
lcd.setCursor(3,0);
lcd.print("SICAKLIK: ");
lcd.setCursor(3,1);
lcd.print(temperature);
delay(100);
}
