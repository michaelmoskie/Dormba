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

void backwards()
{
	lw.ccw();
	rw.ccw();
	Sensor.getDistance(d);
}

void right()
{
	for(int i=0; i<6; i++)
	{
		lw.cw();
		rw.ccw();
	}
}

void left()
{
	for(int i=0; i<6; i++)
	{
		lw.ccw();
		rw.cw();
	}
}