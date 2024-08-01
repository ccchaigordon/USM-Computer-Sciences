#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Rectangle
{
    double length, width;
};

int main()
{
    Rectangle kitchen, bedroom, den;
    kitchen.length = 30.5, kitchen.width = 50;
    bedroom.length = 55, bedroom.width = 45;
    den.length = 50, den.width = 30;

    double totalArea = (kitchen.length * kitchen.width) + (bedroom.length * bedroom.width) + (den.length * den.width);
    cout << "Total area: " << totalArea << " m^2";

    return 0;
}