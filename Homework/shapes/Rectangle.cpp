#include <iostream>
#include "Shape.h"
#include "Rectangle.h"

using namespace std;


Rectangle::Rectangle(int a, int b) : Shape(a)
{
	this->setB(b);
}


void Rectangle::draw()
{
	cout << "_______________________________" << endl
		 << "|                              |" << endl
		 << "|                              |" << endl
		 << "|                              |" << endl
		 << "|______________________________|" << endl;
}

void Rectangle::setB(int size)
{
	this->b = size;
}

int Rectangle::getB()
{
	return this->b;
}