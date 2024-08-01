#include <iostream>

using namespace std;

int main()
{
    float time;
    char medium;
    cout << "--------------------------\n";
    cout << "Speed of Sound in Medium\n";
    cout << "--------------------------\n";
    cout << "A. Carbon Dioxide: 258.0\nB. Air: 331.5\nC. Helium: 972.0\nD. Hydrogen: 1270.0\n\n";
    cout << "Select medium: ";
    cin >> medium;
    cout << "Enter the time taken to reach the location in meter: ";
    cin >> time;
    if (time >= 0 && time <= 30 && (medium == 'A' || medium == 'B' || medium == 'C' || medium == 'D'))
    {
        switch (medium)
        {
        case 'A':
            cout << "The source is " << time * 258 << "m from the location.";
            break;
        case 'B':
            cout << "The source is " << time * 331.5 << "m from the location.";
            break;
        case 'C':
            cout << "The source is " << time * 972 << "m from the location.";
            break;
        default:
            cout << "The source is " << time * 1270 << "m from the location.";
        }
    }
    else
    {
        if (time < 0 || time > 30)
        {
            cout << "Invalid time input!";
        }
        else
        {
            cout << "invalid medium input!";
        }
    }

    return 0;
}