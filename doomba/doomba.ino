#include "Sensor.h"
#include "Motor.h"
Motor rw();
Motor lw();
int d = 90;

void setup()
{
}

void loop()
{
}

void forward()
{
	lw.cw();
	rw.cw();
	Sensor.getDistance(d);
}