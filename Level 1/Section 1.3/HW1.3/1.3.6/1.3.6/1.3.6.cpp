// 1.3.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void main()
{
    signed int i = -20;
    i= i >> 2;
    printf("After arithmatic shift, -20 becomes: %d\n", i);

    unsigned int j = -20;
    j= j >> 2;
    printf("After logic shift, -20 becomes: %d\n", j);
}


