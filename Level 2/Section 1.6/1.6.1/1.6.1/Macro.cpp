/*
 * Author: Zhengji Wang
 * Purpose: Test the two macros defined in Defs.h, initialize a and b, print them
 * Language:  C
 */


#include <stdio.h>
#include "Defs.h"

int main()
{
    int a = 1;
    int b = 2;
    PRINT1(a);
    PRINT2(a, b);
    return 0;


}

