/*
	MotorDriver93d.h 
  Created by the one and only AlaaEssam
*/

#ifndef MotorDriver93d_h
#define MotorDriver93d_h
#include "Arduino.h"

class MotorDriver93d
{
  public:
    MotorDriver93d(int _in1 ,int _in2 ,int _in3, int _in4, int _EnA ,int _EnB);
    void forward(int _RSpeed, int _LSpeed);
    void backward(int _RSpeed, int _LSpeed);
   void right(int _RSpeed, int _LSpeed);
   void left(int _RSpeed, int _LSpeed);
   void rotationRight(int _RSpeed, int _LSpeed);
   void rotationLeft(int _RSpeed, int _LSpeed);
   void Stop();
  private:
  	int in1  ;
	int in2  ;
	int in3  ;
	int in4  ;
	int EnA  ;
	int EnB  ;
	int RSpeed;
	int LSpeed;
};

#endif

