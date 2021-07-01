// 1.3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>

int main()
{
    double base, height;
    printf("Input height:");
    scanf_s("%lf",&height);
    printf("Input base:");
    scanf_s("%lf", &base);
    double area = base * height / 2.0;
    printf("Answer is£º %lf",area);
}
