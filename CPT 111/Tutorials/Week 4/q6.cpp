#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string red = "red", yellow = "yellow", blue = "blue";
    string color1, color2;
    cout << "Enter two colors to be mixed (red, yellow, blue): ";
    cin >> color1 >> color2;
    if ((color1 != red && color1 != yellow && color1 != blue) || (color2 != red && color2 != yellow && color2 != blue) || (color1 == color2))
    {
        if ((color1 != red && color1 != yellow && color1 != blue) || (color2 != red && color2 != yellow && color2 != blue))
        {
            cout << "Invalid input! Please only enter either red, yellow or blue.\n";
        }
        else
        {
            cout << "Please enter two different colors.\n";
        }
    }
    else
    {
        if ((color1 == red && color2 == yellow) || (color2 == red && color1 == yellow))
        {
            cout << "The mixture of " << color1 << " and " << color2 << " is orange.";
        }
        else if ((color1 == red && color2 == blue) || (color2 == red && color1 == blue))
        {
            cout << "The mixture of " << color1 << " and " << color2 << " is purple.";
        }
        else
        {
            cout << "The mixture of " << color1 << " and " << color2 << " is green.";
        }
    }

    return 0;
}