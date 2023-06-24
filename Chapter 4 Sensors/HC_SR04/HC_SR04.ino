#include <Servo.h>
#include <MPU6050_tockn.h>
#include <Wire.h>
unsigned long pre_time;

const int trig = 8;
const int echo = 7;

unsigned long thoigian;
int khoangcach;




void setup()
{
  Serial.begin(9600);

  pinMode(13,OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT); 


}
int SR04()
{

  digitalWrite(trig,0); 
  delayMicroseconds(2); 
  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0);
  thoigian = pulseIn (echo, HIGH);
  khoangcach = int (thoigian / 2 / 29.412); 
  if (khoangcach <= 20)
  {
    digitalWrite(13,1);
  }
  else
  {
    digitalWrite(13,0);
  }
  return khoangcach;
}



void loop()
{
  SR04();
  Serial.println(SR04());
  delay(100);
}
