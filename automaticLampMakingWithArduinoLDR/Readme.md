# Arduino Uno ile Otomatik Lamba Yapımı (LDR Kullanarak)

Bu proje, Arduino Uno kartını kullanarak bir LDR (Işık Bağımlı Direnç) ile otomatik bir lamba yapmayı açıklar. Lamba, çevresel ışık seviyesine bağlı olarak otomatik olarak yanar veya söndürür.

## Gereksinimler

Bu uygulamayı yapmak için aşağıdaki bileşenlere ihtiyacınız olacak:

- 1 adet Arduino Uno kartı
- 1 adet LDR (Işık Bağımlı Direnç)
- 1 adet 10k ohm direnç
- 1 adet 330 ohm direnç
- 1 adet USB kablosu
- 1 adet breadboard
- 5 adet jumper kablo

## Devre Bağlantısı

Lambayı otomatik olarak kontrol etmek için aşağıdaki bağlantıları yapmanız gerekiyor:

1. Arduino Uno'nun 5V pinini breadboard üzerinde bir hatta bağlayın.
2. LDR'nin bir ucunu (herhangi bir uç) aynı hatta bağlayın.
3. LDR'nin diğer ucunu 10k ohm direncin bir ucuyla birleştirin.
4. 10k ohm direncin diğer ucunu Arduino Uno'nun A0 (Analog Pin 0) pinine bağlayın.
5. Arduino Uno'nun GND (Toprak) pinini breadboard üzerinde bir hatta bağlayın.
6. LED'yi breadboard üzerinde bir hatta bağlayın.
7. LED'nin kısa bacağını (katot) 330 ohm dirençle birleştirin.
8. 330 ohm direnç ile LED'nin uzun bacağını (anot) Arduino Uno'nun dijital pin 13'üne bağlayın.

Bu bağlantılar, LDR ile çevresel ışık seviyesini ölçmek ve LED'i otomatik olarak kontrol etmek için gerekli olan temel bağlantıları oluşturur.

Daha fazla ayrıntı, bağlantılar ve örnek projeler için bu uygulamanın Tinkercad simülasyonuna buradan erişebilirsiniz. 
https://www.tinkercad.com/things/7t67ajbLe9f-ldrotomatiklamba

![automaticLampMakingWithArduinoLDR](https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/48abb6f1-4513-44af-9ae1-76d4c1fed454)



https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/33873ada-95d6-4a62-9fa5-9c1652d7a1b9

