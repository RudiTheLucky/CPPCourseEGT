#include "TwoDimShape.h"

TwoDimShape::TwoDimShape(int a, int size, int position, string sh, char ch):Shape(a)
{
    setY(y);
}

void TwoDimShape::getArea()
{
    cout << "getArea() called from 2DIM shape" << endl;
}

void TwoDimShape::print()
{
    cout << "print called from 2DIM shape" << endl;
}

void TwoDimShape::setY(int y)
{
    y = y;
}

double TwoDimShape::getArea() {
    cout << " " << endl;
}
