#ifndef MOTOR_H
#define MOTOR_H

#include "Arduino.h"

class Motor{
public:
	Motor(int step, int dir);
	void cw();
	void ccw();
	int dirPin;
	int stepPin;
private:

	
};

#endif