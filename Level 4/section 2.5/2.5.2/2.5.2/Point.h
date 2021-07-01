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
	const double X() const;
	const double Y() const;

	//setter
	void X(double newx)
	{
		m_x = newx;
	}
	void Y(double newy)
	{
		m_y = newy;
	}

	//tostring
	string ToString() const;

	//distance from origin
	double Distance() const;

	//distance from point p;
	double Distance(const Point& p) const;

	//Operator Overload
	Point& operator = (const Point& source); // Assignment operator

	Point operator - () const; // Negate the coordinates

	Point operator + (const Point& p) const; // Add coordinates

	bool operator == (const Point& p) const; // Equally compare operator

	Point& operator *= (double factor); // Scale the coordinates & assign



	//Global Operator Overload
	friend Point operator * (double factor, const Point& p); // Scale the coordinates 

	friend Point operator * (const Point& p, double factor); // Scale the coordinates 


	friend ostream& operator << (ostream& os, const Point& p);


};

//normal inline getter
inline const double Point::X() const
{
	return m_x;
}
inline const double Point::Y() const
{
	return m_y;
}

#endif

