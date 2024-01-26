# Arduino Uno ile Sıralı LED Yakma Uygulaması

Bu proje, Arduino Uno kartını kullanarak sıralı olarak LED'lerin yanıp sönmesini sağlayan bir uygulamayı açıklar.

## Gereksinimler

Bu uygulamayı yapmak için aşağıdaki bileşenlere ihtiyacınız olacak:

- 1 adet Arduino Uno kartı
- 6 adet LED (herhangi bir renk)
- 6 adet 330 ohm direnç
- 13 adet jumper kablo
- 1 adet breadboard
- Kodları yüklemek için bir ara kablo

## Devre Bağlantısı

LED'lerin sıralı olarak yanıp sönmesini sağlamak için aşağıdaki bağlantıları yapmanız gerekiyor:

1. Arduino Uno'nun dijital pinlerinden birini kullanarak LED'leri bağlayın. Örneğin, 6 LED kullanıyorsanız, dijital pinler 2, 3, 4, 5, 6 ve 7 gibi ardışık pinlere bağlayabilirsiniz.
2. Her LED'in anot (uzun bacak) bağlantısını bir 330 ohm direnç ile birleştirin.
3. 330 ohm dirençlerin diğer uçlarını breadboard üzerinde bir hatta bağlayın.
4. Breadboard üzerindeki aynı hattan bir adet jumper kablosunu Arduino Uno'nun GND (Toprak) pinine bağlayın.
5. Kodları yüklemek için bir ara kablo kullanarak Arduino Uno'yu bilgisayarınıza bağlayın.

Bu bağlantılar, sıralı LED yakma uygulamasını oluşturmak için gerekli olan temel bağlantıları sağlar.

Daha fazla ayrıntı, bağlantılar ve örnek projeler için bu uygulamanın Tinkercad simülasyonuna buradan erişebilirsiniz.
https://www.tinkercad.com/things/gpNdvZiLDIF-karasimsek

![multipleLed(blackLightning)Design](https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/e3a6b274-568e-470c-b175-3e17895721ae)




https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/15a3175b-d678-4976-8e46-a846d10fe8ed

