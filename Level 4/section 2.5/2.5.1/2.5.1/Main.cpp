//main.cpp
//a class to test the function defined in Point.cpp



#include <iostream>
#include "Point.h"



int main()
{
	Point* p1 = new Point();
	Point* p2 = new Point(4.0, 3.0);
	Point* p3 = new Point(*p2);

	cout << (*p1).Distance(*p2) << endl;

	delete p1;
	delete p2;
	delete p3;

	Point* p = new Point[10];
	delete [] p;



	return 0;
}
