#include <iostream>
#include <iomanip>

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
    const int NUM_DAYS = 5; // The number of days
    double sales[NUM_DAYS]; // To hold sales for each day
    double total = 0.0;     // Accumulator
    Day workDay;            // Loop counter

    // Get the sales for each day.
    for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1))
    {
        cout << "Enter the sales for ";

        switch (workDay)
        {
        case 0:
            cout << "MONDAY: ";
            break;
        case 1:
            cout << "TUESDAY: ";
            break;
        case 2:
            cout << "WEDNESDAY: ";
            break;
        case 3:
            cout << "THURSDAY: ";
            break;
        case 4:
            cout << "FRIDAY: ";
            break;
        }

        cin >> sales[workDay];
    }

    // Calculate the total sales.
    for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1))
    {
        total += sales[workDay];
    }

    // Display the total.
    cout << "The total sales are $" << setprecision(2) << fixed << total;

    return 0;
}