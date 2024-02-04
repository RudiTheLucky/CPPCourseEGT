#include "ThreeDimShape.h"

ThreeDimShape::ThreeDimShape(int x, int y, int z):Shape(x)
{
    setY(y);
}

void ThreeDimShape::getArea()
{
    cout << "getArea() called from 3DIM shape" << endl;
}

void ThreeDimShape::print()
{
    cout << "print() called from 3DIM shape" << endl;
}

void ThreeDimShape::getVolume()
{
    cout << "getVolume() called from 3DIM shape" << endl;
}

void ThreeDimShape::setY(int y)
{
    y = y;
}
