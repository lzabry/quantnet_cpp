//Point.h

#ifndef Point_h
#define Point_h


#include <string>
using namespace std;

class Point
{
private:
	//x coordinate
	double m_x;

	//y coordinate
	double m_y;

public:
	//constructor
	Point();
	Point(double newx, double newy);
	Point(const Point& p);

	//destructor
	~Point();

	//getter
	double X();
	double Y();

	//setter
	void X(double newx);
	void Y(double newy);

	//tostring
	string ToString();

	//distance from origin
	double Distance();

	//distance from point p;
	double Distance(const Point& p);



};

#endif
