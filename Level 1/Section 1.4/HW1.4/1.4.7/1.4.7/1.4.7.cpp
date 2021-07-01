// 1.4.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void main() {
	int x = 0;
	int zerocounter = 0;
	int onecounter = 0;
	int twocounter = 0;
	int threecounter = 0;
	int fourcounter = 0;
	printf("Type: ");
	while ((x = getchar()) != EOF) {
		switch (x) {
		case 48:
			zerocounter++;
			break;
		case 49:
			onecounter++;
			break;
		case 50:
			twocounter++;
			break;
		case 51:
			threecounter++;
			break;
		case 52:
			fourcounter++;
			break;
		default:
			break;
		}


	}
	if (threecounter < 3) {

		printf(" Number three appears %d times.", threecounter);
	}
	else {
		printf("The number three appears more than two times.");
	}
}