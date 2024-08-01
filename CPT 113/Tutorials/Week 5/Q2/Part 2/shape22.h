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
    void getVal(double &, double &, double &, double &) const;
    void calcRadian();
    void calcArea();
};

class Cone : public Circle
{
private:
    double height, area, volume;

public:
    Cone();
    Cone(double, double);
    ~Cone() {}
    void print() const;
    void setDimension(double, double);
    void calculateArea();
    void calculateVolume();
};

#endif