#ifndef Circle_h
#define Circle_h

#include "Point.h"

class Circle
{
private:
	Point m_center;
	double m_radius;

public:

	//default constructor
	Circle();

	//variable constructor
	Circle(Point center, double radius);

	//copy constructor
	Circle(const Circle& c1);

	//destructor
	~Circle();

	//getter for center point
	Point CenterPoint() const;

	//getter for radius
	double Radius() const;

	//setter for center point
	void CenterPoint(Point& p);

	//setter for radius
	void Radius(double r);

	//ask for diameter
	double Diameter() const;

	//ask for area
	double Area() const;

	//ask for Circumference
	double Circumference() const;

	//ToString
	string ToString();
















};




















#endif
