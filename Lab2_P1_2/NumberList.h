#pragma once
#define _CRT_SECURE_NO_WARNINGS


class NumberList
{

    int numbers[10];
    int count;

public:

    void Init();
    bool Add(int x);
    void Sort();
    void Print();
};

