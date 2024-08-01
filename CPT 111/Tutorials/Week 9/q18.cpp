#include <iostream>
#include <iomanip>

using namespace std;

double getLength();
double getWidth();
double getArea(double, double);
void displayData(double);

int main()
{
    double length, width, area;
    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    displayData(area);
}

double getLength()
{
    double length;
    cout << "Enter the length of rectangle: ";
    cin >> length;
    return length;
}

double getWidth()
{
    double width;
    cout << "Enter the width of rectangle: ";
    cin >> width;
    return width;
}

double getArea(double length, double width)
{
    return length * width;
}

void displayData(double area)
{
    cout << "The area of the rectangle is: " << area << " cm^2" << endl;
}