

#include "pitch.h"
int melody[]={B0,C1,D1,E1,F1,G1,A1,B1,
C2,D2,E2,F2,G2,A2,B2,
C3,D3,E3,F3,G3,A3,B3,
C4,D4,E4,F4,G4,A4,B4,
C5,CS5,D5,DS5,E5,F5,FS5,G5,GS5,A5,AS5,B5,
C6,CS6,D6,DS6,E6,F6,FS6,G6,GS6,A6,AS6,B6,
C7,CS7,D7,DS7,E7,F7,FS7,G7,GS7,A7,AS7,B7,
C8,CS8,D8,DS8};
const int trig=9;
const int echo=10;
int i=0; 
int distence=0;
int maxi=107;
 int duration=0;
 



void setup() {
   pinMode(trig, OUTPUT); // Sets the trigPin as an Output
pinMode(echo, INPUT); // Sets the echoPin as an Input

}

void loop() {
  digitalWrite(trig, LOW);
delayMicroseconds(2);

digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);

duration = pulseIn(echo, HIGH);

distence= duration*0.0172;
distence=distence-5;
  if((distence>5) && (distence<107))
  {
  i = distence/1.5;
  tone(8,melody[i],125);
  delay(162);
  noTone(8);
  }  }

  
  
  
