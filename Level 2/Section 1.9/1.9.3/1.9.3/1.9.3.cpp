// 1.9.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

struct MyStruct
{
	char c[5];
	short s;
};

int main()
{
	struct MyStruct s = { "Hello World", 14 };
	printf("%d\n", sizeof(s));
}