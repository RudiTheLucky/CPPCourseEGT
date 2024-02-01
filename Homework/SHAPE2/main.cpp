#include "Shape.h"
#include "TwoDimShape.h"
#include "ThreeDimShape.h"
#include <vector>

//demonstrates use of the term virtual in header files to override funcs, something something polymorphism

int main() {
    vector<Shape *> shapes;
    Shape* shap1 = new Shape(2); // 
    Shape* shap2 = new TwoDimShape(2,2);
    Shape* shap3 = new ThreeDimShape(2,3,4);


    shapes.push_back(shap1);
    shapes.push_back(shap2);
    shapes.push_back(shap3);
    for (int i=0; i<shapes.size(); i++){
        shapes.at(i)->print();
        shapes.at(i)->getArea();

    }

    // // cout << "Hello worldo!" << endl;
    return 0;
}