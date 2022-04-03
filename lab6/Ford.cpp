#define _CRT_SECURE_NO_WARNINGS
#include "Ford.h"
#include <stdlib.h>
#include <string>

Ford::Ford() {

	this->Name = (char*)malloc(sizeof(char) * 8);
	strcpy(this->Name, "Ford");
	setFuelCap(45);
	setFuelCons(44);
	setAvgSpeed(23);
}

//Ford::~Ford(){}

void Ford::setFuelCons(float n)
{
	this->FuelCons = n;
}

void Ford::setFuelCap(float n)
{
	this->FuelCap = n;
}

void Ford::setAvgSpeed(float n)
{
	this->AvgSpeed = n;
}

float Ford::getFuelCap()
{
	return this->FuelCap;
}
float Ford::getFuelCons()
{
	return this->FuelCons;
}
float Ford::getAvgSpeed()
{
	return this->AvgSpeed;
}
char* Ford::getName()
{
	return this->Name;
}
