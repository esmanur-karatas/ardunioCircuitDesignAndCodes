# Arduino PWM ile Potansiyometre LED Yakma Uygulaması

Bu proje, Arduino Uno kartını kullanarak bir potansiyometre ile LED'in parlaklığını PWM (Pulse Width Modulation) kullanarak ayarlayan bir uygulamayı açıklar.

## Gereksinimler

Bu uygulamayı yapmak için aşağıdaki bileşenlere ihtiyacınız olacak:

- 1 adet Arduino Uno kartı
- 1 adet potansiyometre
- 1 adet LED
- 1 adet 330 ohm direnç
- 1 adet breadboard
- 5 adet jumper kablo
- Kodları yüklemek için bir USB kablosu

## Devre Bağlantısı


Potansiyometre ile LED'in parlaklığını ayarlamak için aşağıdaki bağlantıları yapmanız gerekiyor:

1. Potansiyometrenin sağ bacağını (VCC tarafı) Arduino Uno'nun 5V pinine bağlayın.
2. Potansiyometrenin sol bacağını (GND tarafı) Arduino Uno'nun GND (Toprak) pinine bağlayın.
3. Potansiyometrenin orta bacağını Arduino Uno'nun A0 (Analog Pin 0) pinine bağlayın.
4. LED'yi breadboard üzerinde bir hatta bağlayın.
5. LED'nin kısa bacağını (katot) 330 ohm direnç ile birleştirin.
6. 330 ohm direnç ile LED'nin uzun bacağını (anot) Arduino Uno'nun dijital pin 3'e bağlayın.

Bu bağlantılar, potansiyometre ile LED parlaklığını kontrol etmek için gerekli olan temel bağlantıları oluşturur.

Daha fazla ayrıntı, bağlantılar ve örnek projeler için bu uygulamanın Tinkercad simülasyonuna buradan erişebilirsiniz.
https://www.tinkercad.com/things/evpnb53GVU3-pwmpotansiyometreledyakma

![TurningLEDOnWithPWMPotentiometer](https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/0cb30b98-4318-4c40-8b20-2a0ef9709d5e)



https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/cb7737da-1fcd-4f8b-bb7e-b88535ec293a

