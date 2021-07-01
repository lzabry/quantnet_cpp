//main.cpp
//a class to test the function defined in Point.cpp



#include <iostream>
#include "Point.h"
#include "Array.h"



int main()
{
	Array array1;
	Array array2(5);
	Array array3(array2);
	cout << array1.Size() << endl;
	cout << array3.Size() << endl;
	array1 = array2;
	cout << array1.Size() << endl;
	Point p1 = Point(2.0, 3.0);
	array3.SetElement(2, p1);
	cout << array3.GetElement(2) << endl;
	cout << array3[2] << endl;

	return 0;
}

