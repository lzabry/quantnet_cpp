//circle.cpp
#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.h"
#include <iostream>
#include <sstream>

namespace zjw
{
	namespace CAD
	{



		//default constructor
		Circle::Circle()
		{
			m_center = Point();
			m_radius = 0.0;
			std::cout << "A new circle has been created using default constructor!" << endl;
		}

		//variable constructor
		Circle::Circle(Point center, double radius)
		{
			m_center = Point(center);
			m_radius = radius;
			std::cout << "A new circle has been created using given variables!" << endl;
		}

		//copy constructor
		Circle::Circle(const Circle& c1)
		{
			m_center = Point(c1.m_center);
			m_radius = c1.m_radius;
			std::cout << "A new circle has been created using copy constructor!" << endl;
		}

		//destructor
		Circle::~Circle()
		{
			std::cout << "Goodbye my circle" << endl;
		}

		//getter for center point
		const Point& Circle::CenterPoint() const
		{
			return m_center;
		}

		//getter for radius
		const double Circle::Radius() const
		{
			return m_radius;
		}

		//setter for center point
		void Circle::CenterPoint(Point& p)
		{
			m_center = p;
		}

		//setter for radius
		void Circle::Radius(double r)
		{
			m_radius = r;
		}

		//ask for diameter
		double Circle::Diameter() const
		{
			return 2.0 * m_radius;
		}

		//ask for area
		double Circle::Area() const
		{
			return M_PI * m_radius * m_radius;
		}

		//ask for Circumference
		double Circle::Circumference() const
		{
			return 2 * M_PI * m_radius;
		}

		//ToString
		string Circle::ToString() const
		{
			ostringstream os;
			os << "Circle has center" << m_center.ToString() << "and raidus " << m_radius << endl;
			return os.str();
		}

		//assginment
		Circle& Circle::operator = (const Circle& source)
		{
			if (this == &source)
				return *this;

			m_center = source.m_center;
			m_radius = source.m_radius;

			return *this;
		}

		//<<
		ostream& operator << (ostream& os, const Circle& c)
		{
			return os << "Cirlce has center " << c.m_center << " with radius " << c.m_radius << endl;



		}
	}
}