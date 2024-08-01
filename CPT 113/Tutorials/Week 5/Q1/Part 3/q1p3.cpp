#include <iostream>
#include "shape.h"

using namespace std;

int main()
{
    Cube cube;

    // Set the values
    cube.setDimension(7);
    cube.calculateVol();
    cube.print();

    return 0;
}