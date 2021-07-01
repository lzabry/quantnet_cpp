//main.cpp
//a class to test the function defined in Point.cpp



#include <iostream>
#include "Point.h"



int main()
{
	double x, y;
	std::cout << "Enter x:" << endl;
	std::cin >> x;
	std::cout << "Enter y:" << endl;
	std::cin >> y;
	//test setter
	Point p1;
	p1.X(x);
	p1.Y(y);


	Point p2;
	p2.X(1);
	p2.Y(2);


	Point p3;
	p3 = p1 + p2;
	std::cout << p3.ToString() << endl;
	p3 = - p2;
	std::cout << p3.ToString() << endl;
	p3 = 3.0 *  p2;
	std::cout << p3.ToString() << endl;
	p3 = p2 * 3.0;
	std::cout << p3.ToString() << endl;
	p3 *= 4.0;
	std::cout << p3.ToString() << endl;
	if (p2 == p3)
	{
		std::cout << "You are always right" << endl;
	}
	else
	{
		std::cout << "You are a failure" << endl;
	}

	return 0;
}
