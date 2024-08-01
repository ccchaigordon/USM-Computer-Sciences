#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>

using namespace std;

// Time

class Time
{
protected:
    int hour, min, sec;
    string ampm;

public:
    Time() { hour = min = sec = 0; }
    ~Time() {}
};

// MilTime

class MilTime : public Time
{
private:
    int milHours, milSeconds;

public:
    MilTime() { milHours = milSeconds = 0; }
    MilTime(int milHr, int milS)
    {
        milHours = milHr;
        milSeconds = sec = milS;
        getStandHr(milHr);
    }
    ~MilTime() {}
    void getStandHr(int);
    void setTime(int, int);
    void print() const;
};

#endif