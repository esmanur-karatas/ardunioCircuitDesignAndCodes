#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C ekran (0x27, 16,2);

void setup()
{
  ekran.init();
  ekran.backlight();
  ekran.setCursor(2,0);
  ekran.print("ESMANUR KARATAS");
  ekran.setCursor(3,1);
  ekran.print("OGRENCİ");
}

void loop()
{
 
}