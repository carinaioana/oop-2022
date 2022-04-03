#pragma once
#include "Circuit.h"
class Car {

protected:
	char* Name;
	float FuelCap, FuelCons, AvgSpeed;

public:
	virtual void  setFuelCap(float);
	virtual void  setFuelCons(float);
	virtual void  setAvgSpeed(float);
	virtual float getFuelCap();
	virtual float getFuelCons();
	virtual float getAvgSpeed();
	virtual char* getName();

};

