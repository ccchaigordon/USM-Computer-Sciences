#include "timeClock.h"
#include <iostream>

using namespace std;

int main()
{
    TimeClock Time(1856, 2203);
    Time.elapsedPrint();

    return 0;
}