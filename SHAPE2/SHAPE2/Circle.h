#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class TwoDimShape :public Shape {
public:
    TwoDimShape(int, int);
    virtual void getArea();
    virtual void print();
    void setY(int);

private:
    int raidus;
};


#endif //TWODIMSHAPE_H