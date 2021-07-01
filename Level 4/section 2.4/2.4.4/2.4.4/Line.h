//Line.h

#ifndef Line_h
#define Line_h

#include "Point.h"

class Line
{
private:
	Point startPoint;
	Point endPoint;

public:

	//default constructor
	Line();

	//another constructor
	Line(const Point& p1, const Point& p2);

	//copy constructor
	Line(const Line& L1);

	//destructor
	~Line();

	//getter for starting point
	const Point& P1() const;

	//getter for the end point
	const Point& P2() const;

	//setter for starting point
	void P1(const Point& p1);

	//setter for ending point
	void P2(const Point& p2);

	//tostring
	string ToString() const;

	//Length
	double Length() const;

	//assignment
	Line& operator = (const Line& source);

	// <<
	friend ostream& operator << (ostream& os, const Line& l);
};



#endif



