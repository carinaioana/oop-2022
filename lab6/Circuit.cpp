#include "Circuit.h"
#include "Dacia.h"
#include "Mercedes.h"
#include "Ford.h"
#include "Mazda.h"
#include "Toyota.h"
#include "Car.h"
#include <vector>
#include <iostream>


void Circuit::SetLength(float l) {
	this->length = l;
}

void Circuit::SetWeather(Weather w) {
	this->weather = w;
}

void Circuit::AddCar(Car* newCar) {
	CarVector.push_back(newCar);
}

void Circuit::Race() {
	int n = CarVector.size();
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (CarVector[i]->getAvgSpeed() < CarVector[j]->getAvgSpeed())
				std::swap(CarVector[i], CarVector[j]);
}

void Circuit::ShowFinalRanks() {
	int p = 1;
	std::cout << "The time cars have finished the race (from fastest to lowest) :";
	for (int i = 0; i < CarVector.size(); i++)
	{
		if (CarVector[i]->getFuelCap() / CarVector[i]->getFuelCons() * 100 >= this->length)
		{
			float t = this->length / CarVector[i]->getAvgSpeed() * 100;
			std::cout << "Locul " << p++ << ": " << CarVector[i]->getName() << " " << "a terminat cursa in " << t << " minute" << '\n';
		}
	}
}// it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

void Circuit::ShowWhoDidNotFinish() {
	std::cout << "The cars that did not finish are:";
	for (int i = 0; i < CarVector.size(); i++)
	{
		if (CarVector[i]->getFuelCap() / CarVector[i]->getFuelCons() * 100 <= this->length)
			std::cout << CarVector[i] << ' ';
	}
} // it is possible that some cars don't have enough fuel to finish the circuit
