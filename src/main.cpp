/*
 ============================================================================
 Name        : main.cpp
 Author      : Ankit Patel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>
#include "singleton.cpp"
using namespace std;

int main(void) {
	//singleton design pattern
	singleton *ston = singleton::getInstance();
	cout << "\n" <<ston;



	return 0;
}
