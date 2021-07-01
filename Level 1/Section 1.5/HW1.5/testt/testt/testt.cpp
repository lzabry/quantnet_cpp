// testt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void main() {

	double f = 4.0;
	f += 4.0 + 10.0 / f++ + 5.0;
	printf("%lf", f);
}