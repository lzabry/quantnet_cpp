// 1.4.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void main() {

	double start=0.0;
	double Fahrenheit = start;
	double end=300.0;
	double size=20.0;


	printf("Fahrenheit,                    Celsius\n");
	while (Fahrenheit <= end) {
		printf("%10.1f,               %10.1f", Fahrenheit, 5.0 / 9.0 * (Fahrenheit - 32));
		printf("\n");
		Fahrenheit += size;
	}

























}