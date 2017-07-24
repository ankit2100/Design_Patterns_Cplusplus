/*
 ============================================================================
 Name        : singleton.cpp
 Author      : Ankit Patel
 Version     :
 Copyright   : Your copyright notice
 Description : SingletonPattern in C++,
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


int main(void) {
	//singleton design pattern
	singleton *ston = singleton::getInstance();
	cout << "\n" <<ston;
	return 0;
}
