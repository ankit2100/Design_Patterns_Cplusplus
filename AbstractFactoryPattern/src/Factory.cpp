
#include<iostream>
using namespace std;

class shape
{
public:
	virtual void draw();
};

class circle : public shape
{
public:
	void draw()
	{
		cout<<"Circle.draw()";
	}
};
class square : public shape
{
public:
	void draw()
	{
		cout<<"Square.draw()";
	}
};
class ellipse : public shape
{
public:
	void draw()
	{
		cout<<"Ellipse.draw()";
	}
};
class rectangle : public shape
{
public:
	void draw()
	{
		cout<<"Rectangle.draw()";
	}
};

class factory
{
public:
	virtual shape* getroundedobjects();
	virtual shape* getsquaredobjects();
};

class simpleshapefactory : public factory {
  public:
	shape* getroundedobjects() {
      return new circle;
    }
    shape* getsquaredobjects() {
      return new square;
    }
};
class robustshapefactory : public factory {
  public:
    shape* getroundedobjects()   {
      return new ellipse;
    }
    shape* getsquaredobjects() {
      return new rectangle;
    }
};

