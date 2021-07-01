//Point.cpp
//where the functions related to Point class are defined

#include <iostream>
#include "Point.h"
#include <sstream>
#include <cmath>
namespace zjw 
{
	namespace CAD 
	{

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
		string Point::ToString() const
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

		//Operator Overload

		// Assignment operator
		Point& Point::operator = (const Point& source)
		{
			// Avoid doing assign to myself
			if (this == &source)
				return *this;

			m_x = source.m_x;
			m_y = source.m_y;

			return *this;


		}

		// Negate the coordinates
		Point Point::operator - () const
		{
			return Point(-m_x, -m_y);
		}

		// Add coordinates
		Point Point::operator + (const Point& p) const
		{
			return Point(m_x + p.m_x, m_y + p.m_y);
		}

		// Equally compare operator
		bool Point::operator == (const Point& p) const
		{
			return (m_x == p.m_x) && (m_y == p.m_y);
		}

		// Scale the coordinates & assign
		Point& Point::operator *= (double factor)
		{
			m_x *= factor;
			m_y *= factor;
			return *this;
		}

		//Global Operator Overload

		// Scale the coordinates 

		Point operator * (double factor, const Point& p)
		{
			return Point(factor * p.m_x, factor * p.m_y);
		}

		Point operator * (const Point& p, double factor)
		{
			return Point(factor * p.m_x, factor * p.m_y);
		}

		ostream& operator << (ostream& os, const Point& p)
		{
			return os << "Point(" << p.m_x << " , " << p.m_y << ")" << endl;
		}
	}
}