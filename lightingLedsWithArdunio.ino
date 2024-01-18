 
void setup() {
pinMode(8,OUTPUT); //8. pine bağladığımız için output yani çıkış çıkış olarak bağlama nedenimiz ardinudan bir enerji gidecek olması.

}

void loop() {
digitalWrite(8,HIGH); //Yüksek çıkış 5 volt enerji yakma
delay (500); //500 milisaniye bekledik.
digitalWrite(8,LOW); //0 volt enerji yani söndürdük. 
delay (500); //500 milisaniye bekledik.
}
