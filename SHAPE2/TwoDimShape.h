#ifndef TWODIMSHAPE_H
#define TWODIMSHAPE_H
#include <string>

#include "Shape.h"
using namespace std;

class TwoDimShape:public Shape{
public:
    TwoDimShape(int, int, int, string, char);
    virtual double getArea();
    virtual void print();
    void setY(int);

    void setSize(int);
    void setPosition(int);
    void setSh(string);
    void setCh(char);
    int getSize();
    int getPosition();
    string getSh();
    char getCh();


private:
    int size;
    int position;
    string sh;
    char ch;
};


#endif //TWODIMSHAPE_H