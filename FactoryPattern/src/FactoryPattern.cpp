/*
 ============================================================================
 Name        : FactoryPattern.cpp
 Author      : Ankit Patel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>
#include "Factory.cpp"
using namespace std;

int main(void) {
	//Factory Pattern Demo
	//getting instance of circle class
	shapefactory *shapefactoryobj = new shapefactory;
	shape *shape1 = shapefactoryobj->getshape("circle");
	shape1->draw();
	//getting instance of rectangle class
	shape1 = shapefactoryobj->getshape("rectangle");
	shape1->draw();

	//getting instance of square class in a different way
	shapefactory shapefactoryobjnew;
	shape *shape2 = shapefactoryobjnew.getshape("square");
	shape2->draw();

	return 0;
}
