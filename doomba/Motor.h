#ifndef MOTOR_H
#define MOTOR_H

#include "Arduino.h"
#include <Servo.h>
class Motor{
public:
	Motor(int srvPin);
	void cw();
	void ccw();
	void stop();
	
private:
	Servo srv;
	
};

#endif