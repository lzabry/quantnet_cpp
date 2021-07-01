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
	double GetX();
	double GetY();

	//setter
	void SetX(double newx);
	void SetY(double newy);

	//tostring
	string ToString();

	//distance from origin
	double DistanceOrigin();

	//distance from point p;
	double Distance(Point p);



};

#endif



