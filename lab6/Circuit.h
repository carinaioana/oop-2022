#pragma once
#include "Car.h"
#include<iostream>
#include <vector>
using namespace std;
enum Weather {
	Rain, Sunny, Snow
};
class Circuit
{
private:

	float length;
	Weather weather;
	vector<Car*> CarVector;

public:

	void SetLength(float);

	void SetWeather(Weather);

	void AddCar(Car*);

	void Race();

	void ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

	void ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

};

  