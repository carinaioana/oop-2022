#define _CRT_SECURE_NO_WARNINGS
#include "Mercedes.h"
#include <stdlib.h>
#include <string>

Mercedes::Mercedes() {

	this->Name = (char*)malloc(sizeof(char) * 8);
	strcpy(this->Name, "Mercedes");
	setFuelCap(70);
	setFuelCons(50);
	setAvgSpeed(60);
}


void Mercedes::setFuelCons(float n)
{
	this->FuelCons = n;
}


void Mercedes::setFuelCap(float n)
{
	this->FuelCap = n;
}

void Mercedes::setAvgSpeed(float n)
{
	this->AvgSpeed = n;
}

float Mercedes::getFuelCap()
{
	return this->FuelCap;
}
float Mercedes::getFuelCons()
{
	return this->FuelCons;
}
float Mercedes::getAvgSpeed()
{
	return this->AvgSpeed;
}
char* Mercedes::getName()
{
	return this->Name;
}