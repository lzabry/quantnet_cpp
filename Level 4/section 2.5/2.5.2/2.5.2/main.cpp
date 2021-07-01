//main.cpp
//a class to test the function defined in Point.cpp



#include <iostream>
#include "Point.h"



int main()
{


	Point* *p = new Point*[3];
	p[0] = new Point();
	p[1] = new Point(1.0, 2.0);
	p[2] = new Point(*p[1]);

	for (int i = 0; i < 3; i++)
	{
		cout << *p[i] << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		delete p[i];
	}


	delete [] p;



	return 0;
}

//I have one question, If for the second last line, I write "delete p;" instead of "delete [] p", 
//the program wouldn't give me a run time error, why though? 

//p
//|
//|
//|
//V
//P[0]   P[1]    P[2]
// |      |       |
// |      |       |
// |      |       |
// V      V       V
//Point  Point    Point
