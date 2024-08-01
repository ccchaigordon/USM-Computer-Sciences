#include "shape24.h"
#include <iostream>

using namespace std;

int main()
{
    Ellipse el;
    el.setRad(10, 8);
    el.calcArea();
    el.printArea();

    return 0;
}