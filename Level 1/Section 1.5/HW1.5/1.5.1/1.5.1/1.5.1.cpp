// 1.5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>


double minus(double x, double y)
{
    return (double) x - y;
}


void main()
{
   
    double a = 2.0;
    double b = 4.0;
    std::cout << "The difference is " << minus(a,b) << ".";
}

