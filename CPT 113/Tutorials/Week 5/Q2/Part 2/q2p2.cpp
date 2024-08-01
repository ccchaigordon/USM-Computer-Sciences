#include "shape22.h"
#include <iostream>

using namespace std;

int main()
{
    Cone cone(5.5, 10);
    cone.calculateArea();
    cone.calculateVolume();
    cone.print();

    return 0;
}