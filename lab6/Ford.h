#pragma once
#include "Car.h"
class Ford:public Car
{
public:
	 Ford();
	 void  setFuelCap(float);
	 void  setFuelCons(float);
	 void  setAvgSpeed(float);
	 float getFuelCap();
	 float getFuelCons();
	float getAvgSpeed();
	 char* getName() override;
};

