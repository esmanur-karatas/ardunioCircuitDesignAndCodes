#define trigPin 7
#define echoPin 6
#define buzzerPin 8

int maximumRange=50;
int minimumRange=0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int olcum=mesafe(maximumRange, minimumRange);
}

int mesafe(int maxrange, int minrange)
{
  long duration, distance;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;
  delay(50);

  if (distance >= maxrange || distance<= minrange) {
   return 0;
    return distance;
}
}