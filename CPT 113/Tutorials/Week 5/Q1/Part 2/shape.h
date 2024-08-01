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
    void setVal(double, double, double);
    void getHW(double &, double &, double &) const;
    Shape();
    Shape(double, double, double);
    ~Shape();
};

class Prism : public Shape
{
private:
    double volume;

public:
    Prism();
    Prism(double, double, double);
    ~Prism();
    void print() { cout << "Length: " << length << "\nWidth: " << width << "\nHeight: " << height << "\nVolume: " << volume << endl; }
    void setDimension(double, double, double);
    void calculateVol();
};

#endif