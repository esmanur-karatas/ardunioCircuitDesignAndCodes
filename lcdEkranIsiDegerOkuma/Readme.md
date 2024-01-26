# Arduino ile LM35 Isı Sensöründen Sıcaklık Okuma ve LCD Ekrana Yazdırma

Bu projede, Arduino kullanarak LM35 ısı sensöründen sıcaklık okuması yapılıp, bu değer I2C LCD ekrana yazdırılıyor. Ayrıca, I2C LCD ekranı bulunmayanlar için standart LCD ekran ile yapılan alternatif bir devre tasarımı da sunulmuştur.

## Gereksinimler

### I2C LCD Ekranlı Devre İçin:
- 1 x Arduino Uno
- 1 x LM35 Isı Sensörü
- 1 x I2C LCD Ekran
- 1 x Breadboard
- Jumper Kablolar


## Devre Şeması

![lcdEkranIsıDegeriOkuma](https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/ab37619e-0ce5-4027-9f76-877181151770)


## Kurulum

### I2C LCD Ekranlı Devre İçin:

1. LM35'in VCC bacağını Arduino'nun 5V pinine bağlayın.
2. LM35'in GND bacağını Arduino'nun GND pinine bağlayın.
3. LM35'in veri çıkış bacağını Arduino'nun analog bir pinine (örneğin A0) bağlayın.
4. I2C LCD ekranın SDA ve SCL pinlerini Arduino'nun SDA ve SCL pinlerine bağlayın.

# Arduino ile MZ5 Isı Sensöründen Sıcaklık Okuma ve Standart LCD Ekrana Yazdırma

Bu projede, Arduino kullanarak MZ5 ısı sensöründen sıcaklık okuması yapılıp, bu değer standart bir LCD ekrana yazdırılıyor.

## Gereksinimler

- 1 x Arduino Uno
- 1 x LM35 Isı Sensörü
- 1 x LCD Ekran (16x2)
- 1 x 10 Kohm Direnç
- 1 x Potansiyometre (Kontrast Ayarı İçin)
- Çok Sayıda Jumper Kablosu



## Kurulum

1. MZ5'in VCC bacağını Arduino'nun 5V pinine bağlayın.
2. MZ5'in GND bacağını Arduino'nun GND pinine bağlayın.
3. MZ5'in veri çıkış bacağını Arduino'nun analog bir pinine (örneğin A0) bağlayın.
4. LCD ekranın VCC ve GND pinlerini sırasıyla Arduino'nun 5V ve GND pinlerine bağlayın.
5. LCD ekranın RS, E, D4, D5, D6 ve D7 pinlerini Arduino'nun dijital pinlerine bağlayın.
6. Potansiyometreyi LCD ekranın kontrast ayarı için V0 pinine bağlayın.

## Arduino Kodu
#include <LiquidCrystal.h>

#include <Wire.h>

int sensorPin=A0;

int sensorValue=0;

float voltage=0;

float temperature=0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {

lcd.begin(16,2);


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




https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/7016b02d-865b-461e-aaa5-6315f3a91aed



## TINCERCAD
Bu projenin Tinkercad üzerindeki simülasyonuna ulaşmak için bu linki takip edebilirsiniz.
https://www.tinkercad.com/things/fKlFSiwidds-lcdekranisidegeriokuma
