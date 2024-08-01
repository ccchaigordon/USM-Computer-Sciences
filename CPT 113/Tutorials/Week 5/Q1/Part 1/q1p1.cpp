#include "shape1.h"
#include <iostream>

using namespace std;

int main()
{
    Shape shape1;
    double length, width, height;

    shape1.print();
    shape1.setVal(1, 2, 3);
    shape1.print();

    return 0;
}