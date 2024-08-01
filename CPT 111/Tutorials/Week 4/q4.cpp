#include <iostream>

using namespace std;

int main()
{
    float area1, area2, length, width;
    cout << "Input the length and width for the first rectangle (cm): ";
    cin >> length >> width;
    area1 = length * width;
    cout << "Input the length and width for the second rectangle (cm): ";
    cin >> length >> width;
    area2 = length * width;
    if (area1 > area2)
    {
        cout << "Rectangle 1 has area of " << area1 << " cm^2 and is bigger than rectangle 2 with area " << area2 << " cm^2.";
    }
    else if (area2 > area1)
    {
        cout << "Rectangle 2 has area of " << area2 << " cm^2 and is bigger than rectangle 1 with area " << area1 << " cm^2.";
    }
    else
    {
        cout << "Rectangle 1 has area of " << area1 << "cm^2 and has the same area as rectangle 2 with area " << area2 << "cm^2.";
    }

    return 0;
}