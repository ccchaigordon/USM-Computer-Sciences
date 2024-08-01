#include <iostream>

using namespace std;

class Rectangle
{
private:
    double length, width;

public:
    Rectangle();
    void setLength(double, double);
    double getArea() const;
    ~Rectangle();
};

Rectangle::Rectangle() {}
Rectangle::~Rectangle() {}

void Rectangle::setLength(double len, double wid)
{
    length = len;
    width = wid;

    getArea();
}

double Rectangle::getArea() const
{
    return length * width;
}

int main()
{
    double len, wid, total = 0;
    Rectangle kitchen, bedroom, den;
    cout << "Enter length and width of kitchen (in meter): ";
    cin >> len >> wid;
    kitchen.setLength(len, wid);
    total += kitchen.getArea();
    cout << "\nArea: " << kitchen.getArea() << " m^2\n\n";
    cout << "Enter length and width of bedroom (in meter): ";
    cin >> len >> wid;
    bedroom.setLength(len, wid);
    total += kitchen.getArea();
    cout << "\nArea: " << bedroom.getArea() << " m^2\n\n";
    cout << "Enter length and width of den (in meter): ";
    cin >> len >> wid;
    den.setLength(len, wid);
    total += kitchen.getArea();
    cout << "\nArea: " << den.getArea() << " m^2\n\n";
    cout << "The total area is " << total << " m^2\n";

    return 0;
}