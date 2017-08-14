/*
 * Factory.cpp
 *
 *  Created on: Aug 13, 2017
 *      Author: ankit.b.patel
 */
#include <iostream>
#include <stdio.h>
using namespace std;
class shape
{
public:
	virtual void draw() ;
};
class rectangle : public shape
{
public:
	void draw()
	{
		cout << "\nInside rectangle::draw() method";
	}
};

class square : public shape
{
public:
	void draw()
	{
		cout << "\nInside square::draw() method";
	}
};

class circle : public shape
{
public:
	void draw()
	{
		cout << "\nInside circle::draw() method";
	}
};
class shapefactory
{
public:
	shape* getshape(string shapetype)
	{

		if (shapetype == "circle")
		{
			newobj = new circle();
			return newobj;
		}
		else if (shapetype == "square")
		{
			newobj = new square();
			return newobj;
		}
		else if (shapetype == "rectangle")
		{
			newobj = new rectangle();
			return newobj;
		}

	}
private :
	shape *newobj;
};
