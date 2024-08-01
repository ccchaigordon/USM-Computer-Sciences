#include "shape.h"
#include <iostream>

using namespace std;

void compareShape(const Shape &shape1, const Shape &shape2)
{
    if (shape1.getArea() == shape2.getArea())
    {
        cout << "Same area.";
    }
    else
    {
        cout << "Different area.";
    }
}

int main()
{
    Shape shape1(10);
    Shape shape2 = shape1;
    compareShape(shape1, shape2);

    return 0;
}
