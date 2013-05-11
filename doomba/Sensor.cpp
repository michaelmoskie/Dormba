#include "Sensor.h"
#include "Servo.h"
Servo sensorServo;
Sensor::Sensor()
{
	Serial.begin(9600);
}
int Sensor::getDistance(int degree)
{
	sensorServo.attach(3);
	//Return distance, converted to centimeters to caller
}