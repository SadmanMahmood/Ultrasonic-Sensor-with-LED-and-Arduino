
const int trigPin = 6;
const int echoPin = 5;
const int led = 13; 

long duration;
int distance;
void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);
pinMode(led, OUTPUT);
Serial.begin(9600); 
}
void loop() {

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);

if (distance < 8){
  digitalWrite(led, HIGH);
}
else {
  digitalWrite(led,LOW);
}
}
