#include "Motor.h"
Motor::Motor(int step, int dir)
{
	pinMode(step,OUTPUT);
	pinMode(dir,OUTPUT);
	digitalWrite(step,LOW);
	digitalWrite(dir,LOW);
	dirPin = dir;
	stepPin = step;
}

void Motor::cw()
{
	digitalWrite(dirPin,LOW);
	digitalWrite(stepPin,LOW);
	delay(100);//The delay needs to be toyed with to get speed right.
	digitalWrite(stepPin,HIGH);
}

void Motor::ccw()
{
	digitalWrite(dirPin,HIGH);
	digitalWrite(stepPin,LOW);
	delay(100);//The delay needs to be toyed with to get speed right.
	digitalWrite(stepPin,HIGH);
}