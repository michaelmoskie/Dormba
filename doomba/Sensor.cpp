#include "Sensor.h"
Sensor::Sensor()
{
	Serial.begin(9600);
}
int Sensor::getDistance()
{
	if(Serial.available()>0)
	{
		int incomingByte = 0;
		incomingByte = Serial.read();
		return int(incomingByte);
	}
	//Return distance, converted to centimeters to caller
}