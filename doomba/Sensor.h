#ifndef SENSOR_H
#define SENSOR_H


#include "Arduino.h"
#include <Servo.h>
class Sensor{
public:
	Sensor(int servoPin);
    int getDistance();
private:
	Servo sensorServo;
};

#endif