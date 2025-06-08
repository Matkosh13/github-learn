#ifndef SONAR_H
#define SONAR_H

class Sonar{
  private:
  int trigerPin;
  int echoPin;
  int spd; // Serial speed
  int dist;
  int dur;
  int maxRange = 300;
  int minRange = 0;
  public:
  Sonar(int newTrigPin, int newEchoPin);
  Sonar(int newTrigPin, int newEchoPin, int newSpd);
  void begin();
  int distance();
  void readDistance();
};

#endif
