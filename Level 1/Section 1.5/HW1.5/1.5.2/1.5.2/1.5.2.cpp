// 1.5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



int factorial(int a)
{
    if (a == 1) {
        return 1;
    }
    return a * factorial(a - 1);

}














void main()
{
    std::cout << "6! is: " << factorial(6);
}

