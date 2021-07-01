// 1.4.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void main() {

	double start = 0.0;
	double Celsius = start;
	double end = 19.0;
	double size = 1.0;


	printf("     Celsius,                 Fahrenheit\n");
	while (Celsius <= end) {
		printf("%10.1f,               %10.1f", Celsius, 1.8 * Celsius + 32);
		printf("\n");
		Celsius += size;
	}

}