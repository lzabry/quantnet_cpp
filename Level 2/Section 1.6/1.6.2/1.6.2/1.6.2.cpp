// 1.6.2.cpp 
//  This file contains the 'main' function. Program execution begins and ends there.
//This is used to test the two macros defined in Defs.h
#include <stdio.h>
#include "Defs.h"

int main()
{
    int x = 0, y = 1, z = 2;
    printf("%d", MAX2(x,y));
    printf("%d", MAX3(x, y, z));

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
