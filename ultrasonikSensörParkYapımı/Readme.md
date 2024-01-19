# Arduino ile Ultrasonik Mesafe Sensörü Park Sensörü

Bu proje, Arduino kullanarak bir park sensörü yapmak için ultrasonik mesafe sensörünü (HC-SR04) ve bir buzzer kullanmayı açıklar. Park sensörü, engelin yaklaşık mesafesini ölçer ve engel belirli bir mesafeye yaklaştığında bir uyarı sesi çıkarır.

## Gereksinimler

Bu uygulamayı yapmak için aşağıdaki bileşenlere ihtiyacınız olacak:

- 1 adet Arduino kartı
- 1 adet ultrasonik mesafe sensörü (HC-SR04)
- 1 adet 330 ohm direnç
- 1 adet buzzer
- 1 adet breadboard
- Jumper kabloları (bağlantılar için)

## Devre Bağlantısı

Ultrasonik mesafe sensörünü ve buzzer'ı Arduino ile bağlamak için aşağıdaki bağlantıları yapmanız gerekiyor:

1. Ultrasonik mesafe sensörünün VCC pinini Arduino'nun 5V pinine bağlayın.
2. Ultrasonik mesafe sensörünün GND pinini Arduino'nun GND (Toprak) pinine bağlayın.
3. Ultrasonik mesafe sensörünün TRIG pinini Arduino'nun 7. pinine bağlayın.
4. Ultrasonik mesafe sensörünün ECHO pinini Arduino'nun 6. pinine bağlayın.
5. Buzzer'ın pozitif bacağını (uzun bacak) 130 ohm direnç ile birleştirin ve Arduino'nun 8. pinine bağlayın.
6. Buzzer'ın negatif bacağını (kısa bacak) Arduino'nun GND (Toprak) pinine bağlayın.

Bu bağlantılar, ultrasonik mesafe sensörünün mesafe ölçümü yapmasını ve buzzer'ın uyarı sesini çıkarmasını sağlar.

Daha fazla ayrıntı, bağlantılar ve örnek projeler için bu uygulamanın Tinkercad simülasyonuna buradan erişebilirsiniz.
https://www.tinkercad.com/things/k6LpfEIDIZ5-ultrasoniksensorpark/editel?returnTo=%2Fdashboard%3Ftype%3Dcircuits%26collection%3Dprojects%26id%3D8FuztexZDTB

![Shiny Bombul-Waasa](https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/4400a2b4-0ddc-4b17-82bd-1c64ed398ff8)
