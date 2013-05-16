#include "Motor.h"
Motor::Motor(int srvPin)
{
	srv.attach(srvPin);
}

void Motor::cw()
{
	srv.write(180);
}

void Motor::ccw()
{
	srv.write(0);
}

void Motor::stop()
{
	srv.write(90);
}