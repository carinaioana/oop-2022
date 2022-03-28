// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.//
#define _CRT_SECURE_NO_WARNINGS

#include "NumberList.h" 


int main()
{
    NumberList L;
    L.Init();
    L.Add(2);
    L.Add(1);
    L.Add(7);
    L.Add(4);
    L.Add(6);
    L.Add(11);
    L.Add(8);
    L.Add(46);
    L.Sort();
    L.Print();
    return 0;


}
