#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

using namespace std;

class Shape
{
protected:
    double height, width, length;

public:
    void print() { cout << "Length: " << length << "\nWidth: " << width << "\nHeight: " << height << endl; }
    void setVal(double = 0, double = 0, double = 0);
    double getHW() const;
    Shape();
    Shape(double, double, double);
    ~Shape();
};

class Cube
{
private:
    double volume;
    Shape shape;

public:
    Cube();
    ~Cube();
    void print() const { cout << "Height: " << shape.getHW() << "\nVolume: " << volume << endl; }
    void setDimension(double);
    void calculateVol();
};

#endif