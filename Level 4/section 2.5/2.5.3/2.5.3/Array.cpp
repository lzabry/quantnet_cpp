#include "Array.h"
#include "iostream"




//default constructor
Array::Array()
{
	m_size = 10;
	m_data = new Point[m_size];
	cout << "An array is created using default constructor" << endl;
}

//with size
Array::Array(int size)
{
	m_size = size;
	m_data = new Point[m_size];
	cout << "An array is created using given size" << endl;


}

//copy constructor
Array::Array(const Array& Array2)
{
	m_size = Array2.m_size;
	m_data = new Point[m_size];
	for (int i = 0; i < m_size; i++)
	{
		m_data[i] = Array2.m_data[i];
	}
	cout << "An array is created using copy constructor" << endl;
}

//desctructor
Array::~Array()
{
	delete[] m_data;
}

//Assignment Operator
Array& Array::operator = (const Array& Array2)
{
	if (this == &Array2)
	{
		return *this;
	}
	delete[]m_data;
	m_size = Array2.m_size;
	m_data = new Point[m_size];

	for (int i = 0; i < m_size; i++)
	{
		m_data[i] = Array2.m_data[i];
	}
	return *this;

}

//Getter Function
const int Array::Size() const
{
	return m_size;
}

const Point& Array::GetElement(int index) const
{
	if (index >= 0 && index < m_size)
	{
		return m_data[index];
	}
	else
	{
		return m_data[0];
	}
}

//Setter Function
void Array::SetElement(int index, const Point& p)
{
	if (index >= 0 && index < m_size)
	{
		m_data[index]=p;
	}
	else
	{
		
	}
}

//operator overloading
Point& Array::operator [] (int index)
{
	if (index >= 0 && index < m_size)
	{
		return m_data[index];
	}
	else
	{
		return m_data[0];
	}
}

const Point& Array::operator [] (int index) const
{
	if (index >= 0 && index < m_size)
	{
		return m_data[index];
	}
	else
	{
		return m_data[0];
	}
}

//I was assuming the const is used for reading, and the other one is for writing, but how would the complier know that? 