// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Array.h"

int main()
{
    //the full namespace for Point class.
    zjw::CAD::Point p= zjw::CAD::Point();

    //using declaration for using a single class (Line).
    using zjw::CAD::Line;
    Line l1 = Line();

    // using declaration for a complete namespace (Containers)
    using namespace zjw::Containers;
    Array a1 = Array();

    //using the Circle class by creating a shorter alias for
    //the YourName::CAD namespace
    namespace c = zjw::CAD;
    c::Circle a = c :: Circle();


    return 0;











}

