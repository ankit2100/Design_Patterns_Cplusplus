/*
 * singleton.cpp
 *
 *  Created on: Jul 23, 2017
 *      Author: ankit.b.patel
 */




/*
 ============================================================================
 Name        : OOdesignpatterns.cpp
 Author      : Ankit Patel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>
using namespace std;
class singleton
{

	public:

		static singleton* getInstance()
		{
			if (ston ==0)
			{
				ston = new singleton();
				return ston;
			}
			return ston;

		}

		void singletonPrint()
		{
			cout <<"\nSingleton class";
		}
	private:
		static singleton *ston; //ston is variable of type singleton where ston is pointer to Singleton, where ston point nowhere
		singleton(){
			cout << "\nInstance was created";
		}

};
singleton* singleton::ston = 0;


