// 1.4.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

using namespace std;

void main()
{
    int text = 0;
    long ccounter = 0;
    long wcounter = 1;
    long lcounter = 1;
    bool space = true;

    printf("Please enter: \n");


    while ((text = getchar()) != 4) {
        switch (text) {
        case(32):
            if (space == true) {
                wcounter++;
                space = false;
            }
            break;
        case(10):
            lcounter++;
            break;
        default:
            ccounter++;
            space = true;
        }

    }

    printf("There are %d characters, %d words and %d new lines", ccounter, wcounter, lcounter);
}