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
}



Point::~Point()
{

}

//getter
double Point::GetX()
{


	return m_x;


}
double Point::GetY()
{


	return m_y;


}

//setter
void Point::SetX(double newx)
{

	m_x = newx;



}
void Point::SetY(double newy)
{

	m_y = newy;


}

//tostring
string Point::ToString()
{
	ostringstream os;
	os << "Point(" << m_x << "," << m_y << ")" << endl;
	return os.str();
}


//distance from origin
double Point::DistanceOrigin() 
{
	return sqrt(m_x * m_x + m_y * m_y);
}

//distance from point p
double Point::Distance(Point p)
{

	return sqrt((m_x - p.m_x) * (m_x - p.m_x) + (m_y - p.m_y) * (m_y - p.m_y));

}