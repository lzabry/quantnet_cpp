//Point.cpp
//where the functions related to Point class are defined

#include <iostream>
#include "Point.h"
#include <sstream>
#include <cmath>

Point::Point()
{
	m_x = 0;
	m_y = 0;
	std::cout << "A new point has been created by default! " << endl;
}

Point::Point(double newx, double newy) : m_x(newx), m_y(newy)
{
	std::cout << "A new point has been created by giving the variable! " << endl;

}

Point::Point(const Point& p) : m_x(p.m_x), m_y(p.m_y)
{
	std::cout << "A new point has been created by copy constructor! " << endl;
}


Point::~Point()
{
	std::cout << "Goodbye my point " << endl;
}



//tostring
string Point::ToString()
{
	ostringstream os;
	os << "Point(" << m_x << "," << m_y << ")" << endl;
	return os.str();
}


//distance from origin
double Point::Distance() const
{
	return sqrt(m_x * m_x + m_y * m_y);
}

//distance from point p
double Point::Distance(const Point& p) const
{

	return sqrt((m_x - p.m_x) * (m_x - p.m_x) + (m_y - p.m_y) * (m_y - p.m_y));

}