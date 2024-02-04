#ifndef RECTANGLE_H
#define SQUARECTANGLE_H
#include <string>
using namespace std;
#include TwoDimShape.h

class Rectangle :public TwoDimShape {
public:
	Rectangle(int, int, string, char, int);
	virtual void print();
	virtual double void getArea();
	virtual void draw();



	void print();
	double getArea();

	void setSize(int);
	void setPosition(int);
	void setSh(string);
	void setCh(char);
	void setSideB(int);
	int getSize(int);
	int getPosition(int);
	string getSh();
	char getCh();
	int getSideB();

private:
		int base, height;
		int size
	    int  position
		string shp
		char ch;
		int sideB;
		};


#endif



