#include "Line.h"
#include <iostream>
#include <sstream>
//default constructor
Line::Line() 
{
	startPoint=Point();
	endPoint = Point();
	std::cout << "Just construct a new line using default constructor! " << endl;
}

//another constructor
Line::Line(const Point& p1, const Point& p2) 
{
	startPoint = p1;
	endPoint = p2;
	std::cout << "Just construct a new line using given points! " << endl;
}

//copy constructor
Line::Line(const Line& L1)
{
	startPoint = Point(L1.startPoint);
	endPoint = Point(L1.endPoint);
	std::cout << "Just construct a new line using copy constructor! " << endl;
}

//destructor
Line::~Line()
{
	std:: cout<< "Goodbye my line!" << endl;
}

//getter for starting point
Point Line::P1() const
{
	return startPoint;

}

//getter for the end point
Point Line:: P2() const
{
	return endPoint;
}

//setter for starting point
void Line::P1(const Point& p1)
{
	startPoint = p1;
}

//setter for ending point
void Line::P2(const Point& p2)
{
	endPoint = p2;
}

//tostring
string Line::ToString() const
{
	ostringstream os;
	os << "This Line starts with " << P1().ToString() << "end with " << P2().ToString()<<"."<<endl;
	return os.str();

}

//Length
double Line::Length() const
{
	return startPoint.Distance(endPoint);
}


