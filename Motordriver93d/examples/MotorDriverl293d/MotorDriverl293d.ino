//L293d motor driver module by Alaa Essam 
#include <MotorDriver93d.h>
MotorDriver93d motor(4,5,7,8,6,9);//in1 in2 in3 in4 EnA EnB
void setup() {

}

void loop() {
  motor.forward(255,255);
  delay(1000);
  motor.backward(255,255);
  delay(1000);
  motor.right(50,200);
  delay(1000);
  motor.left(200,50);
  delay(1000);
  motor.rotationRight(200,200);
  delay(1000);
  motor.rotationLeft(200,200);
  delay(1000);
  motor.Stop();
  delay(1000);

}
