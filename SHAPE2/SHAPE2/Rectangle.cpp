#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int a, int size, int position, std::string sh, char ch, int SideB) : TwoDimShape(a, size, position, sh , ch) {
	setSize(size);
	setPosition(position);
	setSh(sh);
	set(ch);
	setSideB(SideB);
}

void Rectangle::setSize(int size) {
	//data validation
	this->size = size;
}

void Rectabgke::setSh(std::string shap) {
	this->sh = shap;
}

void Rectangle::setCh(char ch); {
	this->ch = ch;
}

void Rectangle::setSodeB(int sideB) {
	this->sideB = sideB;
}

void Rectangle::print()
{
	cout << "Print() called from Rectangle" << endl;
}

void Rectangle::getArea()
{
	cout << "Print() called from Rectangle" << endl;
}

void Rectangle::draw()
{
	cout << "Print() called from Rectangle" << endl;
}

double Rectangle::getArea() {
	cout << "We are in getArea Rectangle" << endl;
	return getsideB() * getA();
}