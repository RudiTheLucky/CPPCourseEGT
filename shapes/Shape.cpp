#include <iostream>
#include "Shape.h"

using namespace std;

Shape::Shape(int side)
{
	this->a = side;
}

void Shape::draw()
{
	cout << "Should not show!" << endl;
}


int Shape::getA()
{
	return this->a;
}

void Shape::setA(int side)
{
	this->a = side;
}

