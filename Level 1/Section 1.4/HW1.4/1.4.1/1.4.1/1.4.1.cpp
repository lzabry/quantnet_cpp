// 1.4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


    while ((text=getchar())!=4){
        if ((text >= 65 && text <=90) || (text >= 97 && text <= 122)) {
            ccounter++;
            space = true;
        }
        else if (text == 32 && space==true) {
            wcounter++;
            space = false;
        }
        else if (text == 10) {
            lcounter++;
        }
        else {
            continue;
        }

    }
    
    printf("There are %d characters, %d words and %d new lines", ccounter, wcounter, lcounter);
}

