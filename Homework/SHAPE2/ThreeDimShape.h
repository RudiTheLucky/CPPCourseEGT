#ifndef THREEDIMSHAPE_H
#define THREEDIMSHAPE_H

#include "Shape.h"

class ThreeDimShape:public Shape{
public:
    ThreeDimShape(int, int, int);
    virtual void getArea();
    virtual void print();
    void getVolume();
    void setY(int);

private:
    int x, y, z;
};


#endif //THREEDIMSHAPE_H