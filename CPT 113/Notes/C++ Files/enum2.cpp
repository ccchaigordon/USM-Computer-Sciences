#include <iostream>

using namespace std;

enum class Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

int main()
{
    // Need to use cast operator
    int workDay = static_cast<int>(Day::TUESDAY);

    cout << workDay;

    return 0;
}
