int redCar = 10; 
int yellow = 9;   
int greenCar = 8;  
int redPed = 7;    
int greenPed = 6;
  


void setup() {
  pinMode(redCar, OUTPUT);
  pinMode(greenCar, OUTPUT);
  pinMode(redPed, OUTPUT);
  pinMode(greenPed, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop(){

  digitalWrite(greenPed, HIGH);
  digitalWrite(redCar, HIGH);
  delay(5000);

   digitalWrite(greenPed, LOW);
    digitalWrite(redPed, HIGH);
    delay(1000);
     digitalWrite(redPed, LOW);
    delay(1000);
     digitalWrite(redPed, HIGH);
    delay(1000);
     digitalWrite(redPed, LOW);
    delay(1000);
     digitalWrite(redPed, HIGH);
    delay(3000);
    digitalWrite(redCar, LOW);
     digitalWrite(greenCar, HIGH);
    delay(5000);
    digitalWrite(greenCar, LOW);
    digitalWrite(yellow, HIGH);
delay(3000);
  digitalWrite(yellow, LOW);
  digitalWrite(redPed, LOW);
}
