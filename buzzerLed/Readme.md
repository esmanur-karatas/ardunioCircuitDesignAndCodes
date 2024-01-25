# Arduino ile Buzzer ve Potansiyometre Kontrollü LED ve Buzzer Uygulaması

Bu projede, bir potansiyometrenin okuduğu değere göre hem bir LED'in yanıp sönmesini hem de bir buzzer'ın ses çıkarmasını kontrol eden bir devre inşa edeceğiz. Kullanıcı potansiyometreyi ayarladıkça, LED'in yanıp sönme hızı ve buzzer'ın ses frekansı değişecektir.

## Gereksinimler

- 1 x Arduino Uno
- 1 x Breadboard
- 1 x Potansiyometre
- 1 x Buzzer
- 1 x LED
- 2 x 330 Ohm Direnç
- 5 x Jumper Kablo

## Devre Şeması

![Ingenious Amur](https://github.com/esmanur-karatas/ardunioCircuitDesignAndCodes/assets/83882274/c9e3fcff-eba1-460b-88fa-c3cda8db0a46)


## Kurulum

1. Potansiyometrenin orta bacağını Arduino'nun analog bir pinine (örneğin A0) bağlayın.
2. Potansiyometrenin diğer iki bacağını sırasıyla 5V ve GND'ye bağlayın.
3. LED'in uzun bacağını (anot) bir 330 Ohm direnç ile Arduino'nun bir dijital pinine (örneğin 9) bağlayın.
4. LED'in kısa bacağını (katot) GND'ye bağlayın.
5. Buzzer'ı bir diğer 330 Ohm direnç ile başka bir dijital pine (örneğin 11) ve GND'ye bağlayın.

## Tincercad
Bu projenin Tinkercad üzerindeki simülasyonuna ulaşmak için bu linki takip edebilirsiniz.
https://www.tinkercad.com/things/a2w1SBpKp6K-buzzerpin
