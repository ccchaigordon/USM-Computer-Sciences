#include "shape22.h"
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

// Cone

Cone::Cone() : Circle(0) { height = area = volume = 0; }

Cone::Cone(double r, double h) : Circle(r, 0.0)
{
    height = h;
}

void Cone::print() const
{
    cout << "Radius: " << radius << "\nHeight: " << height << "\nArea: " << area << "\nVolume: " << volume << endl;
}

void Cone::setDimension(double r, double h)
{
    radius = r;
    height = h;
}

void Cone::calculateArea()
{
    area = PI * radius * (radius + sqrt(height * height + radius * radius));
}

void Cone::calculateVolume()
{
    volume = PI * radius * radius * height;
}