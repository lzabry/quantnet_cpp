#include <stdio.h>
#include "Print.h"

void print()
{
	extern int i;
	printf("%d", i*2);
}
