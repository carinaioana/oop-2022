#define _CRT_SECURE_NO_WARNINGS
#include "Mazda.h"
#include <stdlib.h>
#include <string>

Mazda::Mazda() {

	this->Name = (char*)malloc(sizeof(char) * 8);
	strcpy(this->Name, "Mazda");
	setFuelCap(38);
	setFuelCons(49);
	setAvgSpeed(43);
}


void Mazda::setFuelCons(float n)
{
	this->FuelCons = n;
}

void Mazda::setFuelCap(float n)
{
	this->FuelCap = n;
}

void Mazda::setAvgSpeed(float n)
{
	this->AvgSpeed = n;
}

float Mazda::getFuelCap()
{
	return this->FuelCap;
}
float Mazda::getFuelCons()
{
	return this->FuelCons;
}
float Mazda::getAvgSpeed()
{
	return this->AvgSpeed;
}
char* Mazda::getName()
{
	return this->Name;
}