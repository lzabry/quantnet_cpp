// 1.7.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//It has a function DayName()which can print the day of a given day - number.

#include <stdio.h>
//declare the Dayname Function
void Dayname(int Daynumber);


//main function that test the DayName Function
int main()
{
    Dayname(5);
    return 0;
}

//Dayname Function can print the day of a given day-number
void Dayname(int Daynumber) 
{
    const char* daylist[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    if (Daynumber >= 1 && Daynumber <= 7) 
    {
        printf("Day %d is a %s.", Daynumber, daylist[Daynumber - 1]);
    }
}