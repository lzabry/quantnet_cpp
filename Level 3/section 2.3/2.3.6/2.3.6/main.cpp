//main.cpp
//a class to test the function defined in Point.cpp



#include <iostream>
#include "Point.h"
#include "Circle.h"




int main()
{
	double x, y;
	std::cout << "Enter x:" << endl;
	std::cin >> x;
	std::cout << "Enter y:" << endl;
	std::cin >> y;

	Point mypt;
	mypt.X(x);
	mypt.Y(y);


	//print tostring
	std::cout << mypt.ToString() << endl;

	//print getter value
	std::cout << "X value is:" << mypt.X() << " and Y value is: " << mypt.Y() << " " << endl;


	Point p2;
	p2.X(1);
	p2.Y(2);

	


	std::cout << "The distance from P2 TO origin is " << p2.Distance() << endl;
	std::cout << "The distance between P1 and P2 is " << p2.Distance(mypt) << endl;

	Circle mycircle;
	mycircle = Circle(mypt, 2);
	std::cout << mycircle.ToString() << endl;
	std::cout << mycircle.Area() << endl;




	return 0;
}
