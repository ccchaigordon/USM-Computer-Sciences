#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

using namespace std;

class Circle
{
private:
    double radian, degree, area;

protected:
    double radius;

public:
    Circle();
    Circle(double = 0, double = 0);
    ~Circle() {}
    const double PI = 3.14159;
    void print() const;
    void setVal(double, double);
    void getVal(double &) const;
    void calcRadian();
    void calcArea();
};

class Cylinder
{
private:
    double height, volume;
    Circle circle;

public:
    Cylinder();
    ~Cylinder() {}
    void print(double) const;
    void getRad(double &) const;
    void setDimension(double, double);
    void calculateVol(double);
};

#endif