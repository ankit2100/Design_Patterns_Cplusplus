/*
 * AdapterPattern_Example2.cpp
 *
 *  Created on: Jul 30, 2017
 *      Author: ankit.b.patel
 */

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class abstractclassB
{
	public :
		string virtual getName();
		void virtual setName(string name);
};
class classB : public abstractclassB
{

	public :
	string name;
	string getName()
	{
		return name;
	}
	void setName(string Name)
	{
		name = Name;
	}
};

class abstractclassA
{
	public :
	string virtual getFirstName();
	void virtual setFirstName(string fname);
	string virtual getLastName();
	void virtual setLastName(string lname);

};
class classA : public abstractclassA
{
	public :
	string firstname;
	string lastname;
	string getFirstName()
	{
		return firstname;
	}
	void setFirstName(string fname)
	{
		firstname = fname;
	}
	string getLastName()
	{
		return lastname;
	}
	void setLastName(string lname)
	{
		lastname = lname;
	}

};

class Adapter_ex2 : public abstractclassA
{
	public:
		string firstname;
		string lastname;
		abstractclassB *T;
		int i;
		int j;
		char c;
		string splitbyspace(string str)
		{
			//sorry assuming that the str will be always 'John Smith', Just assigning directly. Have to implement this function.
			firstname = "john";
			lastname = "smith";
		}
		Adapter_ex2(abstractclassB *TT)
		{
			T = TT ;
			splitbyspace(T->getName());
		}
		string getFirstName()
		{
			return firstname;
		}
		string getLastName()
		{
			return lastname;
		}
		void setFirstName(string fname)
		{
			firstname = fname;
		}
		void setLastName(string lname)
		{
			lastname = lname;
		}

};
