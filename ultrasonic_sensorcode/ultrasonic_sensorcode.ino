#define trigPin  10
#define echoPin  11

long timetaken;
int distance;

void setup()
{
  
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

Serial.begin(9600);
}

void loop() 
{
digitalWrite(trigPin, LOW);
delay(1);
digitalWrite(trigPin, HIGH);
delay(5);
digitalWrite(trigPin, LOW);


timetaken = pulseIn (echoPin, HIGH);
distance = timetaken* 0.2/2;
 if (timetaken < 900)
 {
Serial.print("Movement: ");
Serial.println(distance);
delay(1000);
 }

}
