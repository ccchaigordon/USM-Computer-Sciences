#include "shape23.h"
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

void Circle::setVal(double rad, double deg)
{
    radius = rad;
    degree = deg;
}

void Circle::getVal(double &r) const
{
    r = radius;
}

void Circle::calcRadian()
{
    radian = degree * PI / 180;
}

void Circle::calcArea()
{
    area = PI * radius * radius;
}

// Cylinder

Cylinder::Cylinder() : circle(0.0) { height = volume = 0; }

void Cylinder::getRad(double &radius) const
{
    double rad;
    circle.getVal(rad);
    radius = rad;
}

void Cylinder::setDimension(double r, double h)
{
    circle.setVal(r, 0);
    height = h;
}

void Cylinder::print(double radius) const
{
    cout << "Radius: " << radius << "\nHeight: " << height << "\nVolume: " << volume << endl;
}

void Cylinder::calculateVol(double radius)
{
    volume = circle.PI * radius * radius * height;
}