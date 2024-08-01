#ifndef TIMECLOCK_H
#define TIMECLOCK_H
#include <iostream>
#include <cmath>

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

// TimeClock

class TimeClock : public MilTime
{
private:
    int start, end, elapsed;

public:
    TimeClock() { start = end = 0; }
    TimeClock(int st, int en)
    {
        start = st;
        end = en;

        if ((end % 100) < (start % 100))
        {
            elapsed = (((end / 100) * 100) - (((start / 100) + 1) * 100)) + 60 + ((end % 100) - (start % 100));
        }
        else
        {
            elapsed = end - start;
        }
    }
    ~TimeClock() {}
    void elapsedPrint();
};

#endif