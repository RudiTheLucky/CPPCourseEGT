#include "Shape.h"

Shape::Shape(int x)
{
    setShape(x);
}

void Shape::setShape(int x){
    len = x;
}

void Shape::getShape(){
    cout << "get shape called" << endl;
}

void Shape::print()
{
    cout << "print called from Shape" << endl;
}

void Shape::getArea()
{
    cout << "print getArea() called from Shape" << endl;
}
