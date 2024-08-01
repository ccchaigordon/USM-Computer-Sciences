#include "shape24.h"
#include <iostream>
#include <cmath>

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

void Circle::setVal(double ar)
{
    area = ar;
}

void Circle::getVal(double &ar) const
{
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

// Ellipse

Ellipse::Ellipse() : Circle()
{
    shortRad = 0;
}

void Ellipse::setRad(double rad, double shortR)
{
    radius = rad;
    shortRad = shortR;
}

void Ellipse::calcArea()
{
    setVal(PI * radius * shortRad);
}

void Ellipse::printArea() const
{
    double area;
    getVal(area);
    cout << "Area: " << area;
}