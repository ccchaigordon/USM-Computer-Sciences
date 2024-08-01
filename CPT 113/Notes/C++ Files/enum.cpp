#include <iostream>

using namespace std;

enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

int main()
{
    // This only works for weakly typed enumerators
    int workDay = MONDAY;

    cout << workDay;

    return 0;
}
