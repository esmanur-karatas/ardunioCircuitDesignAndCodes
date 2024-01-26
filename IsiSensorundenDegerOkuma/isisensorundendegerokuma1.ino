int sensorPin=A0;
int sensorValue=0;
float voltage=0;
float temperature=0;

void setup() {
 Serial.begin(9600);

}

void loop() {
sensorValue=analogRead(sensorPin);
voltage=(sensorValue/1024.0)*5000.0;
temperature=voltage/10.0;
Serial.println(temperature);
}
