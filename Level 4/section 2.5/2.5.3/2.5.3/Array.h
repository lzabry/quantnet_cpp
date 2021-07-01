#ifndef Array_h
#define Array_h


#include "Point.h"



class Array
{
private:
	Point* m_data;
	int m_size;


public:
	//default constructor
	Array();

	//with size
	Array(int size);

	//copy constructor
	Array(const Array& Array2);

	//desctructor
	~Array();

	//Assignment Operator
	Array& operator = (const Array& Array2);

	//Getter Function
	const int Size() const;
	const Point& GetElement(int index) const;

	//Setter Function
	void SetElement(int index, const Point& p);

	//operator overloading
	Point& operator [] (int index);
	const Point& operator [] (int index) const;




};










#endif