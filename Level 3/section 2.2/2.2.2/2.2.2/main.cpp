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

	Point mypt;
	mypt.SetX(x);
	mypt.SetY(y);

	//print tostring
	std::cout << mypt.ToString() << endl;

	//print getter value
	std::cout << "X value is:" << mypt.GetX() << " and Y value is: " << mypt.GetY() << " " << endl;


	Point p2;
	p2.SetX(1);
	p2.SetY(2);

	std::cout << "The distance from P2 TO origin is " << p2.DistanceOrigin() << endl;
	std::cout << "The distance between P1 and P2 is " << p2.Distance(mypt) << endl;






	return 0;
}