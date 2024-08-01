#include "shape.h"
#include <iostream>

using namespace std;

int main()
{
    // Test Prism class
    Prism prism1;
    prism1.setDimension(3, 3, 4);
    prism1.calculateVol();
    prism1.print(); // Should print values 3, 3, 4 and calculated volume
    cout << "------------------------------------\n";

    Prism prism2(2, 3, 4);
    prism2.calculateVol();
    prism2.print(); // Should print values 2, 3, 4 and calculated volume

    return 0;
}