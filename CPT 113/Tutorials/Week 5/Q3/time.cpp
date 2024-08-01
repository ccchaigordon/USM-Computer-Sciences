#include "time.h"
#include <iostream>

using namespace std;

// MilTime

void MilTime::getStandHr(int MilHr)
{
    if (MilHr >= 1200 && MilHr < 2400)
    {
        hour = (MilHr - 1200) / 100;
        min = (MilHr - 1200) - (((MilHr - 1200) / 100) * 100);
        ampm = "pm";
    }
    else
    {
        hour = MilHr / 100;
        min = MilHr - ((MilHr / 100) * 100);
        ampm = "am";
    }
}

void MilTime::setTime(int milHr, int milS)
{
    milHours = milHr;
    milSeconds = sec = milS;
    getStandHr(milHr);
}

void MilTime::print() const
{
    cout << "\nMilitary Time: " << milHours << " hours" << endl;
    cout << "Standard Time: " << hour << ":" << min << ":" << sec << " " << ampm << endl;
}