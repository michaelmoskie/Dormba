#include "Sensor.h"
#include "Motor.h"
#include <Servo.h>
Motor rw(10);
Motor lw(11);
int d = 90;
Servo senSrv;
Sensor sensor(13);
void setup()
{
	pinMode(A0,INPUT);
	senSrv.attach(3);
}

void loop()
{
	int x = analogRead(A0);
	if (x<20)
	{
		right();
	}
	else if (x>20) 
	{
		forward();
	}

}

void forward()
{
	lw.cw();
	rw.cw();
}

void backwards()
{
	lw.ccw();
	rw.ccw();
}

void right()
{
	rw.ccw();
	lw.ccw();
	delay(500);
	rw.stop();
	lw.stop();
}

void left()
{
	rw.cw();
	lw.cw();
	delay(500);
	rw.stop();
	lw.stop(); 
}
