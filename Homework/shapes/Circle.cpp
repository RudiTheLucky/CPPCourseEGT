#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(int a, double r) : Shape(a)
{
    this->setRadius(r);
}

void Circle::draw() 
{
    cout << "Circle drawn! " << endl;
    
}

void Circle::setRadius(double r)
{
    this->radius = r;
}

double Circle::getRadius()
{
    return this->radius;
}

