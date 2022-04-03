#pragma once
#include "Car.h"

class Mercedes:public Car
{
public:
	Mercedes();
	void  setFuelCap(float);
	void  setFuelCons(float);
	void  setAvgSpeed(float);
	float getFuelCap();
	float getFuelCons();
	float getAvgSpeed();
	char* getName();

};

