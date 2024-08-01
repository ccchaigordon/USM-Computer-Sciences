#ifndef SHAPE
#define SHAPE
#include <iostream>

using namespace std;

class Shape
{
private:
    double area;

public:
    Shape(double area) {this->area = area;}
    ~Shape() {}
    double getArea() const;
};

#endif
