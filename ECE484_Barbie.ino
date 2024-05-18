
#include <Servo.h>

int phoresisPin = A3;
int ledPin = 5;
int val = 0;
Servo myservo; 
int pos = 0;    
int direct = 0;
int points = 0;
const int sense1 = 2;
const int sense2 = 3;
const int sense3 = 4;
int sense1Val = 0;
int sense2Val = 0;
int sense3Val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  myservo.attach(9);  
  pinMode(sense1, INPUT);
  pinMode(sense2, INPUT);
  pinMode(sense3, INPUT);
}

void loop() {
  sense1Val = digitalRead(sense1);
  sense2Val = digitalRead(sense2);
  sense3Val = digitalRead(sense3);
  val = analogRead(phoresisPin);
  Serial.println(val);

  if (sense1Val == LOW)
  {
    Serial.println(points);
    delay(100);
  }
  else if (sense2Val == LOW)
  {
    Serial.println(points);
    delay(100);
  }
  else if (sense3Val == LOW)
  {
    Serial.println(points);
    delay(100);
  }
  else 
  {
    points = 0;
    Serial.println(points);
  }

  if (val < 200) {
    digitalWrite(ledPin, HIGH);
  }  else {
    digitalWrite(ledPin, LOW);
  }
  
  if (pos = 0; pos += 2 ) { 
    myservo.write(pos);              
    delay(15);                       
  }
  else if (pos = 180; pos -= 2 ) { 
    myservo.write(pos);              
    delay(15);                       
  }
}

