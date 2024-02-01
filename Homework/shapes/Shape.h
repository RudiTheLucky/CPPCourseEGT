#pragma once

#include <iostream>

using namespace std;

class Shape
{
public:
	Shape(int);
	virtual void draw();
	int getA();
	void setA(int);

private:
	int a;

};