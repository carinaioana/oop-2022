#pragma once
#include "Car.h"

class Toyota:public Car
{
	public:
	Toyota();
	void  setFuelCap(float);
	void  setFuelCons(float);
	void  setAvgSpeed(float);
	float getFuelCap();
	float getFuelCons();
	float getAvgSpeed();
	char* getName() override;
};

