# turningOnTheLEDWithTheButton (Arduino Uno ile Buton Kullanarak Basit LED Yakma Uygulaması)

Bu proje, Arduino Uno kartını kullanarak buton kullanarak basit bir LED yakma uygulamasını gerçekleştirmek için gerekli bileşenlerin ve kodun nasıl kullanılacağını açıklar.

## Gereksinimler

Bu uygulamayı yapmak için aşağıdaki bileşenlere ihtiyacınız olacak:

- 1 adet Arduino Uno kartı
- 1 adet LED (herhangi bir renk)
- 1 adet 330 ohm direnç
- 1 adet 10k ohm direnç
- 1 adet buton (push-button)
- 1 adet breadboard
- 4 adet jumper kablo

## Devre Bağlantısı

LED'yi doğru şekilde yakmak için aşağıdaki bağlantıları yapmanız gerekiyor:

1. Arduino Uno'dan bir adet jumper kablosunu GND (Toprak) pinine bağlayın.
2. Ardından, LED'nin kısa bacağını (katot) aynı hat üzerindeki GND pinine bağlayın.
3. LED'nin uzun bacağını (anot) 330 ohm direnç ile birleştirin.
4. 330 ohm direncin diğer ucunu herhangi bir breadboard hattına bağlayın.
5. Breadboard'un aynı hattından bir adet jumper kablosunu Arduino Uno'nun dijital pin 10'a bağlayın.

Butonu bağlamak için:

6. Breadboard üzerinde bir adet butonun bir bacağını GND pinine bağlayın.
7. Diğer buton bacağını, 10k ohm direncin diğer ucuyla birleştirin.
8. 10k ohm direncin diğer ucunu 5V pinine bağlayın.
9. Butonun diğer bacağını Arduino Uno'nun dijital pin 8'e bağlayın.

Bu bağlantılar, LED'i ve butonu Arduino Uno ile kontrol etmek için gerekli olan temel bağlantıları oluşturur.

![turningOnTheLEDWithTheButtonDesign](https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/b5816b1c-7d52-4fa4-9bb8-8914aaede119)
