/*
 ============================================================================
 Name        : AdapterPattern.cpp
 Author      : Ankit Patel
 Version     :
 Copyright   : Your copyright notice
 Description : Adapter Pattern C++,
 ============================================================================
 */

#include <iostream>
#include "Adapter.cpp"
#include "AdapterPattern_Example2.cpp"
using namespace std;

int main(void) {

	//Adapter Pattern Demo from File Adapter.cpp
	switchboard *switchb = new switchboard;
	adapter *ad = new adapter(switchb);
	ad->roundpin();
	ad->pincount();

	//Adapter Pattern Demo from File AdapterPattern_Example2.cpp

	classB *b =new classB;
	b->setName("John smith");
	Adapter_ex2 *ad2 = new Adapter_ex2(b);
	cout << ad2->getFirstName() << "\n" <<ad2->getLastName();

	return 0;
}
