#ifndef SQUARE_H
#define SQUARE_H


#include TwoDimShape.h

class Square :public TwoDimShape {
public:
	Rectangle(int, int);
	virtual void print();
	virtual void getArea();
	virtual void draw();

private:
	int sidelenght;
	int size;
	int position;
	string sh;
	string ch;
};


#endif