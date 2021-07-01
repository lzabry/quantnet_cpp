// 1.7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program aims to create a function which swaps two values
// author: Zhengji Wang
//

#include <stdio.h>

void swap(int *a, int *b);

//main function to test the swap function
int main()
{
    int i = 123;
    int j = 456;
    
    swap(&i, &j);

    printf("Value of i is %d, Value of j is %d", i, j);

}


//swap function that would swap two integer values
void swap(int *a, int *b) 
{

    int c = *a;
    int d = *b;
    *a = d;
    *b = c;

}