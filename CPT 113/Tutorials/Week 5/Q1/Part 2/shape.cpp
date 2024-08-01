#include "shape.h"
#include <iostream>

using namespace std;

Shape::Shape()
{
    length = width = height = 0;
}

Shape::Shape(double l, double w, double h)
{
    length = l;
    width = w;
    height = h;
}

Shape::~Shape() {}

void Shape::setVal(double l, double w, double h)
{
    length = l;
    width = w;
    height = h;
}

void Shape::getHW(double &l, double &w, double &h) const
{
    l = length;
    w = width;
    h = height;
}

Prism::Prism() : Shape() { volume = 0; }

Prism::Prism(double l, double w, double h) : Shape(l, w, h)
{
    volume = 0;
}

Prism::~Prism() {}

void Prism::setDimension(double l, double w, double h)
{
    length = l;
    width = w;
    height = h;
}

void Prism::calculateVol()
{
    volume = length * height * width;
}