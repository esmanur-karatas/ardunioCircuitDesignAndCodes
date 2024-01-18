// değişkenler
#define Buton 8 //8. girişe butonu bağladık 
#define Led 10 //10. girişe ledimizi bağladık

int buton_durumu= 0; // 0 mı 1 mi yani true false gibi led yakıp söndürebiliriz.

void setup() {
 pinMode(Buton, INPUT); //Girdi alıyoruz yani veri 
 pinMode(Led, OUTPUT); //Çıktı veriyoruz yani ışığı yakıyoruz.
}

void loop() {
buton_durumu = digitalRead(Buton); //butondaki veriyi oku
//EĞER BUTONDAN GELEN VERİ 1 İSE IŞIĞI YAK DEĞİLSE YAKMA
if(buton_durumu==1){
  digitalWrite(Led,HIGH); //IŞIĞI YAK 
}
else {
  digitalWrite(Led,LOW); //IŞIĞI KAPAT
}

/*
EĞER TEK SATIRDA KOD YAZACAKSA SÜSLÜ PARANTEZLERE GEREK YOK
if(buton_durumu==1)
  digitalWrite(Led,HIGH); //IŞIĞI YAK 
  else 
  digitalWrite(Led,LOW); //IŞIĞI KAPAT


  DEĞİŞKEN TANIMLAMADAN DA YAPABİLİRİZ.
if(digitalRead(Buton)==1)
  digitalWrite(Led,HIGH); //IŞIĞI YAK 
  else 
  digitalWrite(Led,LOW); //IŞIĞI KAPAT
*/
}
