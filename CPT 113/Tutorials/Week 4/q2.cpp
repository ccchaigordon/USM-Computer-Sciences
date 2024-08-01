#include <iostream>

using namespace std;

class Line
{
private:
    double length;

public:
    Line(double = 0);
    void printLen() const;
    ~Line();
};

void Line::printLen() const
{
    cout << "Length: " << length << " m.";
}

Line::Line(double len)
{
    length = len;
}

Line::~Line() {}

int main()
{
    double length;
    cout << "Enter the length (in meter): ";
    cin >> length;
    Line line(length);
    line.printLen();

    return 0;
}