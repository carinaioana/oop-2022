#define _CRT_SECURE_NO_WARNINGS
#include "Toyota.h"
#include <stdlib.h>
#include <string>

Toyota::Toyota() {

	this->Name = (char*)malloc(sizeof(char) * 8);
	strcpy(this->Name, "Toyota");
	setFuelCap(60);
	setFuelCons(47);
	setAvgSpeed(52);
}


void Toyota::setFuelCons(float n)
{
	this->FuelCons = n;
}

void Toyota::setFuelCap(float n)
{
	this->FuelCap = n;
}

void Toyota::setAvgSpeed(float n)
{
	this->AvgSpeed = n;
}

float Toyota::getFuelCap()
{
	return this->FuelCap;
}
float Toyota::getFuelCons()
{
	return this->FuelCons;
}
float Toyota::getAvgSpeed()
{
	return this->AvgSpeed;
}
char* Toyota::getName()
{
	return this->Name;
}