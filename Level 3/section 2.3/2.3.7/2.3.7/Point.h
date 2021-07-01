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
	double X() const;
	double Y() const;

	//setter
	inline void X(double newx)
	{
		m_x = newx;
	}
	inline void Y(double newy)
	{
		m_y = newy;
	}

	//tostring
	string ToString();

	//distance from origin
	double Distance() const;

	//distance from point p;
	double Distance(const Point& p) const;



};
//normal inline getter
inline double Point::X() const
{
	return m_x;
}
inline double Point::Y() const
{
	return m_y;
}
#endif

