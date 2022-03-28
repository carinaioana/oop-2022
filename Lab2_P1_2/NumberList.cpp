
#define _CRT_SECURE_NO_WARNINGS

#include "NumberList.h"
#include <iostream>


void NumberList::Init()
{
	this->count = 0;

}
// count will be 0

bool NumberList::Add(int x)
{
	if (this->count < 10)
	{
		this->numbers[count] = x;
		this->count++;
	}
	else  return false;

}
// adds X to the numbers list and increase the data member count.
// if count is bigger or equal to 10, the function will return false

void NumberList::Sort()
{
	int i, j;
	for (i = 0; i < this->count - 1; i++)
		for (j = i + 1; j < this->count; j++)
		{
			if (this->numbers[i] > this->numbers[j])
			{
				int aux = this->numbers[i];
				this->numbers[i] = this->numbers[j];
				this->numbers[j] = aux;
			}
		}
}
// will sort the numbers vector

void NumberList::Print()
{
	int i;
	for (i = 0; i < this->count; i++)
		std::cout << this->numbers[i] << ' ';
}
// will print the current vector
