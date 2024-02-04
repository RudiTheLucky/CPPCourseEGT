#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

//make twodim and threedim shape inherit from shape, use virtual void print(); yadda yadda, make sure to use 

class Shape{
public:
    Shape(int x = 0);
    void setShape(int);
    void getShape();
    virtual void print();
    virtual double getArea();

private:
    int len;

};


#endif // SHAPE_H