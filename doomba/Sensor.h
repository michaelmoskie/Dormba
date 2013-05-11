#ifndef SENSOR_H
#define SENSOR_H


#include "Arduino.h"

class Sensor{
public:
	Sensor();
    int getDistance(int degree);
};

#endif