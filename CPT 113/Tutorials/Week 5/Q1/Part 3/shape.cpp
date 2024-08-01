#include <iostream>
#include "shape.h"

using namespace std;

// Shape

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

void Shape::setVal(double h, double w, double l)
{
    height = h;
    width = w;
    length = l;
}

double Shape::getHW() const
{
    return height;
}

// Cube

Cube::Cube()
{
    volume = 0;
}

Cube::~Cube() {}

void Cube::setDimension(double h)
{
    shape.setVal(h, h, h);
}

void Cube::calculateVol()
{
    volume = shape.getHW() * shape.getHW() * shape.getHW();
}