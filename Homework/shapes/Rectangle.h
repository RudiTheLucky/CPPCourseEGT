#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
public:
	Rectangle(int, int);
	
	void draw();
	void setB(int);
	int getB();
private:

	int b;
};