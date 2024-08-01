#include "shape1.h"
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