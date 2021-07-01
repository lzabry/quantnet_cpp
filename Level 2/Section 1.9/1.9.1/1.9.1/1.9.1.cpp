// 1.9.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This is a C-program that reads the characters from the keyboard and shows them on 
//screen(the inputted characters should only be displayed when the user hits 'enter', line
 //by line)

#include <stdio.h>

int main()
{
	printf("Type any characters you want\n");
	int i;
	while ((i = getchar()) != 1)
	{
		putchar(i);
	}
	printf("CTRL + A is a correct ending.");
	return 0;
}

