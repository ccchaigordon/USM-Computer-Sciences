#include "time.h"
#include <iostream>

using namespace std;

int main()
{
    MilTime time;
    int hours, seconds;

    cout << "Enter time in military format: ";
    cin >> hours;
    cout << "Enter seconds: ";
    cin >> seconds;

    while (hours > 2359 || hours < 0 || seconds < 0 || seconds > 59)
    {
        cout << "\n[Invalid input, please reenter.]\n\n";
        cout << "Enter time in military format: ";
        cin >> hours;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    time.setTime(hours, seconds);
    time.print();
}