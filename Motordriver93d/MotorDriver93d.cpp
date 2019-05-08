#include "Arduino.h"
#include "MotorDriver93d.h"


MotorDriver93d::MotorDriver93d(int _in1 ,int _in2 ,int _in3, int _in4, int _EnA ,int _EnB)
{
  	in1 = _in1;
	in2 = _in2;
	in3 = _in3;
	in4 = _in4;
	EnA = _EnA; 
	pinMode(in1, OUTPUT);
  	pinMode(in2, OUTPUT);
	pinMode(in3, OUTPUT);
  	pinMode(in4, OUTPUT);
  	pinMode(EnA, OUTPUT);
  	pinMode(EnB, OUTPUT);
	
}


void MotorDriver93d::forward(int _RSpeed  ,int _LSpeed)
{
    RSpeed = _RSpeed;
    LSpeed = _LSpeed;
    digitalWrite(in1, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in4, LOW);
    analogWrite(EnA, RSpeed);
    analogWrite(EnB, LSpeed);
}

void MotorDriver93d::Stop()
{
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      analogWrite(EnA, 0);
      analogWrite(EnB, 0);
}

void MotorDriver93d::backward(int _RSpeed  ,int _LSpeed)
{
    RSpeed = _RSpeed;
    LSpeed = _LSpeed;
    digitalWrite(in2, HIGH);
    digitalWrite(in4, HIGH);
    digitalWrite(in1, LOW);
    digitalWrite(in3, LOW);
    analogWrite(EnA, RSpeed);
    analogWrite(EnB, LSpeed);
}
void MotorDriver93d::left(int _RSpeed  ,int _LSpeed)
{
    RSpeed = _RSpeed;
    LSpeed = _LSpeed;
    digitalWrite(in1, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in4, LOW);
    analogWrite(EnA, RSpeed);
    analogWrite(EnB, LSpeed);
}
void MotorDriver93d::right(int _RSpeed  ,int _LSpeed)
{
    RSpeed = _RSpeed;
    LSpeed = _LSpeed;
    digitalWrite(in1, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in4, LOW);
    analogWrite(EnA, RSpeed);
    analogWrite(EnB, LSpeed);
}
void MotorDriver93d::rotationLeft(int _RSpeed  ,int _LSpeed)
{
    RSpeed = _RSpeed;
    LSpeed = _LSpeed;
    digitalWrite(in3, HIGH);
     digitalWrite(in1, LOW);
     digitalWrite(in4, LOW);
     digitalWrite(in2, HIGH);
    analogWrite(EnA, RSpeed);
    analogWrite(EnB, LSpeed);
}
void MotorDriver93d::rotationRight(int _RSpeed  ,int _LSpeed)
{
    RSpeed = _RSpeed;
    LSpeed = _LSpeed;
    digitalWrite(in1, HIGH);
     digitalWrite(in3, LOW);
     digitalWrite(in2, LOW);
     digitalWrite(in4, HIGH);
    analogWrite(EnA, RSpeed);
    analogWrite(EnB, LSpeed);
}
