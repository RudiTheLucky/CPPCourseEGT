#pragma once

#include "Shape.h"

class Circle : public Shape {
public:
    Circle(int, double);
    void draw(); //const override;
    void setRadius(double);
    double getRadius();
    // Пренаписване на функцията за рисуване
    
private:
    double radius;
};
