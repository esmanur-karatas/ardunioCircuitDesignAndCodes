# Arduino ile Sıcaklık Ölçümü ve LED Yakma Uygulaması

Bu proje, Arduino ile bir sıcaklık sensörü (NTC) kullanarak çevresel sıcaklığı ölçen ve belirli bir sıcaklık eşiği aşıldığında bir LED'i yakma uygulamasını açıklar.

## Gereksinimler

Bu uygulamayı yapmak için aşağıdaki bileşenlere ihtiyacınız olacak:

- 1 adet Arduino kartı
- 1 adet sıcaklık sensörü (NTC)
- 1 adet 10k ohm direnç
- 1 adet 330 ohm direnç
- 1 adet breadboard
- 1 adet USB kablosu (Arduino'yu bilgisayara bağlamak için)
- Jumper kabloları (bağlantılar için)

## Devre Bağlantısı

Sıcaklık sensörünü Arduino ile bağlamak için aşağıdaki bağlantıları yapmanız gerekiyor:

1. Sıcaklık sensörünün bir bacağını Arduino'nun 5V pinine bağlayın.
2. Sıcaklık sensörünün diğer bacağını Arduino'nun GND (Toprak) pinine bağlayın.
3. Sıcaklık sensörünün orta bacağını breadboard üzerinde bir hatta bağlayın.
4. Breadboard üzerinde aynı hattan bir adet 10k ohm direnç kullanarak diğer bir hatta bağlayın.
5. 10k ohm direncin diğer ucunu Arduino'nun A0 (Analog Pin 0) pinine bağlayın.
6. LED'yi breadboard üzerinde bir hatta bağlayın.
7. LED'nin kısa bacağını (katot) 330 ohm direnç ile birleştirin.
8. 330 ohm direnç ile LED'nin uzun bacağını (anot) Arduino'nun dijital pin 2'ye bağlayın.

Bu bağlantılar, sıcaklık sensörü ve LED'i Arduino ile bağlamak için gerekli olan temel bağlantıları sağlar.

Daha fazla ayrıntı, bağlantılar ve örnek projeler için bu uygulamanın Tinkercad simülasyonuna buradan erişebilirsiniz.
https://www.tinkercad.com/things/6ohhGgWvGHI-ledlightingwithtemperaturemeasurement

![Ingenious Jofo-Curcan](https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/88716b0b-5bbc-4220-ad67-c28ecd93245d)
