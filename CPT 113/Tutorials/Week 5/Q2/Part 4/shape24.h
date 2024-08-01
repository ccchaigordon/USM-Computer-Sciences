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
    Circle(double, double);
    ~Circle() {}
    const double PI = 3.14159;
    void print() const;
    void setVal(double);
    void getVal(double &) const;
    void calcRadian();
    void calcArea();
};

// Ellipse

class Ellipse : public Circle
{
private:
    double shortRad;

public:
    Ellipse();
    void setRad(double, double);
    void calcArea();
    void printArea() const;
};

#endif