#pragma once

#include <iostream>
#include <string>

using namespace std;

class Box
{
public:
    Box(double, double, double);
    void setWidth(double);
    void setLenght(double);
    void setHeight(double);
    double getWidth() const;
    double getLenght() const;
    double getHeight() const;
    void print() const;
    friend Box operator+(Box const&, Box const&); // const& прави така че да няма значение дали
    // подаваш обекти или оказатели към обекти, понеже & взима обекта, към който сочи оказателя

    //Box* уб1 = б1;
    //Box* уб2 = б2;
    //    уб1 = уб1 + уб2

    // a = a + 10; е същото като a+= 10;


private:
    double width;
    double lenght;
    double height;

};
