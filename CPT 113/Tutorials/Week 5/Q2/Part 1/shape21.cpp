#include "shape21.h"
#include <iostream>

using namespace std;

// Circle

Circle::Circle()
{
    radius = radian = degree = area = 0;
}

Circle::Circle(double r, double deg)
{
    radius = r;
    degree = deg;
}

void Circle::print() const
{
    cout << "Radius: " << radius << "\nRadian: " << radian << "\nDegree: " << degree << "\nArea: " << area << endl;
}

void Circle::setVal(double rad, double deg)
{
    radius = rad;
    degree = deg;
}

void Circle::getVal(double &r, double &rad, double &deg, double &ar) const
{
    r = radius;
    rad = radian;
    deg = degree;
    ar = area;
}

void Circle::calcRadian()
{
    radian = degree * PI / 180;
}

void Circle::calcArea()
{
    area = PI * radius * radius;
}