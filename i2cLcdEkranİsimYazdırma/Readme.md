# Arduino ile I2C LCD Ekrana İsim Yazma Uygulaması

Bu projede, Arduino kullanarak I2C LCD ekrana isim yazmayı gerçekleştireceğiz. Bu uygulama, basit bir ekran arayüzü üzerinde mesaj gösterimi yapmak için kullanılabilir.

## Gereksinimler

- 1 x Arduino Uno
- 1 x I2C LCD Ekran
- 3 x Jumper Kablo
- Wire.h ve LiquidCrystal_I2C.h kütüphaneleri

## Devre Şeması

![Dazzling Wolt-Tumelo](https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/0129c40c-e736-4346-9a9d-6dbfe5f54fc5)

## I2c Olmayan Lcd Ekran Devre Şeması

![lcdEkran2](https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/ccaae220-5a49-4f1e-90d5-6cbc475eba3b)

## Kurulum

1. I2C LCD ekranın SDA ve SCL pinlerini Arduino'nun SDA (A4) ve SCL (A5) pinlerine bağlayın.
2. LCD ekranın VCC ve GND pinlerini Arduino'nun 5V ve GND pinlerine bağlayın.

## Tincercad
Bu projenin Tinkercad üzerindeki simülasyonuna ulaşmak için bu linki takip edebilirsiniz.

https://www.tinkercad.com/things/hFruJ8gS2pP-i2clcdisimyazdirma
