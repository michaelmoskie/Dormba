#include "Sensor.h"
#include "Motor.h"
#include <Servo.h>
Motor rw(11,12);
Motor lw(10,9);
int d = 90;
Servo senSrv;
Sensor sensor;
void setup()
{
	senSrv.attach(3);
}

void loop()
{
}

void forward()
{
	lw.cw();
	rw.cw();
	sensor.getDistance(d);
}

void backwards()
{
	lw.ccw();
	rw.ccw();
	sensor.getDistance(d);
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

void servoPos(int pos)
{
	senSrv.write(pos);
}