#pragma once
#include "Car.h"
#include "Circuit.h"

class Dacia:public Car
{
public:
    Dacia();
	void  setFuelCap(float);
	void  setFuelCons(float);
	void  setAvgSpeed(float);
	float getFuelCap();
	float getFuelCons();
	float getAvgSpeed();
	char* getName();
};

