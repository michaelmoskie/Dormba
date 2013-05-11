#include "Sensor.h"
#include "Servo.h"
Servo sensorServo;
int Sensor::getDistance(int degree)
{
	sensorServo.attach(3);
	//Return distance, converted to centimeters to caller
}