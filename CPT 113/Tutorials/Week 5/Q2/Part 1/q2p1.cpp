#include "shape21.h"
#include <iostream>

using namespace std;

int main()
{
    // Without passing arguments
    Circle circle1;
    circle1.setVal(30, 50);
    circle1.calcRadian();
    circle1.calcArea();
    circle1.print();
    cout << endl;

    // Passing arguments
    Circle circle2(30, 50);
    circle2.setVal(50, 80);
    circle2.calcRadian();
    circle2.calcArea();
    circle2.print();
    cout << endl;

    return 0;
}