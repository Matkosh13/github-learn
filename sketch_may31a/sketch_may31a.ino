#include <SoftwareSerial.h>

SoftwareSerial bt(2, 3); //rx, tx
char Char = ' ' ;

void Stop();
void left();
void sound();
void ONE();
void Right();
void back();
void front();
void TWO();
void THREE();

void setup()
{
  bt.begin(9600);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  analogWrite(5, 255);

  analogWrite(10, 255);

}

void loop()
{
  if (bt.available())
  {
    Char = bt.read();
    Serial.print(Char);
    Serial.println();
    if (Char == 'S')
    {
      Stop();
    }
    if (Char == 'F')
    {
      front();
    }
    if (Char == 'B')
    {
      back();
    }
    if (Char == 'L')
    {
      left();
    }
    if (Char == 'R')
    {
      Right();
    }
    if (Char == 'Y')
    {
      front();
      delay(10);
      left();
      delay(10);
    }
    if (Char == 'Z')
    {
      front();
      delay(10);
      Right();
      delay(10);
    }
    if (Char == '1')
    {
      ONE();
    }
    if (Char == '2')
    {
      TWO();
    }
    if (Char == '3')
    {
      THREE();
    }
    if (Char == '5')
    {
      sound();
    }
  }
}

void THREE()
{
  analogWrite(5, 255);
  analogWrite(10, 255);
}

void ONE()
{
  analogWrite(5, 50);
  analogWrite(10, 50);
}

void front()
{
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}

void left()
{
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}

void Right()
{
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}

void TWO()
{
  analogWrite(5, 150);
  analogWrite(10, 150);
}

void sound()
{
  tone(4, 500);
  delay(100);
  tone(4, 500);
  delay(100);
  tone(4, 500);
  delay(100);
  tone(4, 500);
  delay(100);
  tone(4, 500);
  delay(100);
  tone(4, 500);
  delay(100);
  tone(4, 500);
  delay(100);
  tone(4, 500);
  noTone(4);
}

void back()
{
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}

void Stop()
{
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
}
