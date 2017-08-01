/*
 * Adapter.cpp
 *
 *  Created on: Jul 30, 2017
 *      Author: ankit.b.patel
 */


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
#include <stdio.h>
using namespace std;

class abstractplug
{

public:
	void virtual roundpin();
	void virtual pincount();
};
class plug : public abstractplug
{
	public :
	void roundpin()
	{
		printf("Round pin\n");
	}
	void pincount()
	{
		printf("I have 2 pins\n");
	}
};

class abstractswitchboard
{

	public:
	void virtual flatpin();
	void virtual pincount();
};
class switchboard : public abstractswitchboard
{
	public :
	void flatpin()
	{
		printf("Flat pin\n");
	}
	void pincount()
	{
		printf("I have 3 pins\n");
	}
};

class adapter : public abstractplug
{
	public:
		abstractswitchboard *T ;
		adapter(abstractswitchboard *TT)
		{
			T = TT;
		}
		void roundpin()
		{
			T->flatpin();
		}
		void pincount()
		{
			T->pincount();
		}
};

