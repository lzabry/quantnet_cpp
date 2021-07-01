//main.cpp
//a class to test the function defined in Point.cpp



#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Circle.h"



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


	Line myline = Line(p1, p2);
	Circle c2 = Circle(p1, 2.0);
	std::cout << p1 << endl;
	std::cout << myline<< endl;
	std::cout << c2 << endl;

	return 0;
}
