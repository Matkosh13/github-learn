#include "Sonar.h"
#include <Arduino.h>

Sonar::Sonar(int newTrigPin, int newEchoPin){
  trigerPin = newTrigPin;
  echoPin = newEchoPin;
}

Sonar::Sonar(int newTrigPin, int newEchoPin, int newSpd){
  trigerPin = newTrigPin;
  echoPin = newEchoPin;
  spd = newSpd;
}

void Sonar::begin(){
  Serial.begin(spd);
  pinMode(trigerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

int Sonar::distance(){
  digitalWrite(trigerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigerPin, LOW);
  dur = pulseIn(echoPin, HIGH);
  dist = dur / 58.3;
  return dist;
}
