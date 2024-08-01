#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

using namespace std;

class Circle
{
private:
    double radius, radian, degree, area;

public:
    Circle();
    Circle(double, double);
    ~Circle() {}
    const double PI = 3.14159;
    void print() const;
    void setVal(double, double);
    void getVal(double &, double &, double &, double &) const;
    void calcRadian();
    void calcArea();
};

#endif