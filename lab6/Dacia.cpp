
#define _CRT_SECURE_NO_WARNINGS
#include "Dacia.h"
#include <stdlib.h>
#include <string>

Dacia::Dacia() {

	this->Name = (char*)malloc(sizeof(char) * 8);
	strcpy(this->Name, "Dacia");
	setFuelCap(50);
	setFuelCons(40);
	setAvgSpeed(30);
}
//Dacia::~Dacia() {}

void Dacia::setFuelCons(float n)
{
	this->FuelCons = n;
}

void Dacia::setFuelCap(float n)
{
	this->FuelCap = n;
}

void Dacia::setAvgSpeed(float n)
{
	this->AvgSpeed = n;
}

float Dacia::getFuelCap()
{
	return this->FuelCap;
}
float Dacia::getFuelCons()
{
	return this->FuelCons;
}
float Dacia::getAvgSpeed()
{
	return this->AvgSpeed;
}
char* Dacia::getName()
{
	return this->Name;
}