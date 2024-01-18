#define potpin A1 // burada orta bacak pinini nereye bağladığımızı yazdık.
int deger=0;
void setup() {
Serial.begin(9600); //ardunio ile pc nin haberleşmesi için bir seri haberleşme başlattık. 9600 haberleşme hızı.
Serial.print("Pot Değer Okuma: "); //arduniodan gelen değeri okurken yazdırmak için.
}


void loop() {
deger=analogRead(potpin); // deger i analogdan gelen değeri yazdır. analogdan gelen değer de potpin değişkeni.
Serial.println(deger);//değeri ekrana yazdır.
delay(300); // eğer yavaşlatmak istersek kullanabilriz.
}
