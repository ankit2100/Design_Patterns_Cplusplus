/*
 ============================================================================
 Name        : AbstractFactoryPattern.cpp
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
	cout << "Abstract Factory" << endl; /* prints Abstract Factory */
	factory *factory = new simpleshapefactory();
	factory->getroundedobjects()->draw();

	factory = new robustshapefactory();
	factory->getsquaredobjects()->draw();
	return 0;
}
