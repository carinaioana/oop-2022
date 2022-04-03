#pragma once
#include "Car.h"
class Mazda:public Car
{
	public:
		Mazda();
		void  setFuelCap(float);
		void  setFuelCons(float);
		void  setAvgSpeed(float);
		float getFuelCap();
		float getFuelCons();
		float getAvgSpeed();
		char* getName();

};	

