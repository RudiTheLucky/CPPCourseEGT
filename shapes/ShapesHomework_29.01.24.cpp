#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main() {
    
    Shape* shapePtr;

    shapePtr = new Rectangle(10, 15);
    shapePtr->draw();

    shapePtr = new Circle(15, 5);
    shapePtr->draw();

    return 0;
}