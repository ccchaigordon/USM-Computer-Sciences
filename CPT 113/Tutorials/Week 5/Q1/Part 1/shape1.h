#ifndef SHAPE1_H
#define SHAPE1_H
#include <iostream>

using namespace std;

class Shape
{
private:
    double height, width, length;

public:
    void print() { cout << "\nLength: " << length << "\nWidth: " << width << "\nHeight: " << height << endl; }
    void setVal(double, double, double);
    void getHW(double &, double &, double &) const;
    Shape();
    Shape(double, double, double);
    ~Shape();
};

#endif