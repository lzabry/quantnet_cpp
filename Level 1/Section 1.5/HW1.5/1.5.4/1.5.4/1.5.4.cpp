// 1.5.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int printnumber(int i)
{
	if (i < 10)
	{
		putchar(i + '0');
		return i;
	}
	printnumber(i / 10) % 10;
	putchar(i%10+'0');
	



}

void main()
{
	printnumber(12345);
}