#define AIN1 4
#define AIN2 5
#define BIN1 7
#define BIN2 8
#include <Servo.h>
Servo Servo1;
 
void setup() {
  Serial.begin(9600);
  
  pinMode(A0, OUTPUT); // water sensor

  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2,OUTPUT);

  Servo1.attach(12);

  pinMode(2, OUTPUT);     // D2 выход
  pinMode(3, OUTPUT);     // D3 выход

  Servo1.write(90);
  delay(1000);
  Servo1.write(180);
  delay(1000);
  Servo1.write(0);
  
}
 
void loop() {
  
  water = analogRead(A0); // water ot 0 do 1023
  if ( water < 800 ) {
       digitalWrite(2, HIGH ) ;
  }

  digitalWrite(AIN1,HIGH); 
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,HIGH); 
  digitalWrite(BIN2,LOW);
 
  delay(3000);
  
  digitalWrite(AIN1,LOW); 
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,LOW);
  
  delay(3000);
  
  digitalWrite(AIN1,LOW); 
  digitalWrite(AIN2,HIGH);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,HIGH);
 
  delay(3000);
  
  digitalWrite(AIN1,LOW); 
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,LOW);
  
  delay(3000);
   
}
