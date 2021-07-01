#ifndef Array_h
#define Array_h


#include "Point.h"

namespace zjw 
{
	namespace Containers
	{
		class Array;
	}
}


class zjw::Containers::Array
{
private:
	zjw::CAD::Point* m_data;
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
	const zjw::CAD::Point& GetElement(int index) const;

	//Setter Function
	void SetElement(int index, const zjw::CAD::Point& p);

	//operator overloading
	zjw::CAD::Point& operator [] (int index);
	const zjw::CAD::Point& operator [] (int index) const;




};










#endif
