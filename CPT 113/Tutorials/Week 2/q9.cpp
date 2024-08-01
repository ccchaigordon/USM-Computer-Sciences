#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct dateTime
{
    int year, month, day, hour, min, sec;
};

void userInput(dateTime &);

int main()
{
    dateTime date1, date2;

    userInput(date1);
    userInput(date2);

    cout << endl
         << "Date 1: " << date1.year << "/" << date1.month << "/" << date1.day;
    cout << endl
         << "Date 2: " << date2.year << "/" << date2.month << "/" << date2.day << endl
         << endl;

    if (date1.year < date2.year)
    {
        cout << "Date 1 is earlier than Date 2.\n";
    }
    else if (date1.year == date2.year)
    {
        if (date1.month < date2.month)
        {
            cout << "\nDate 1 is earlier than Date 2.\n";
        }
        else if (date1.month == date2.month)
        {
            if (date1.day < date2.day)
            {
                cout << "Date 1 is earlier than Date 2.\n";
            }
            else
            {
                cout << "Identical Dates.\n";
            }
        }
    }
    else
    {
        cout << "Date 2 is earlier than Date 1.\n";
    }

    return 0;
}

void userInput(dateTime &date)
{
    static int counter = 1;

    cout << "[Date " << counter << "]\n\n";
    cout << "Year: ";
    cin >> date.year;

    while (date.year < 0)
    {
        cout << "\nInvalid year input, please reenter.\n\n";
        cout << "Year: ";
        cin >> date.year;
    }

    cout << "Month (1 - 12): ";
    cin >> date.month;

    while (date.month < 1 || date.month > 12)
    {
        cout << "\nInvalid month input, please reenter.\n\n";
        cout << "Month (1 - 12): ";
        cin >> date.month;
    }

    cout << "Day: ";
    cin >> date.day;

    while (date.day < 0)
    {
        cout << "\nInvalid day input, please reenter.\n\n";
        cout << "Day: ";
        cin >> date.day;
    }

    while (date.day < 0 || date.day > 31)
    {
        cout << "\nInvalid day input, please reenter.\n\n";
        cout << "Day (0 - 31): ";
        cin >> date.day;
    }

    cout << "Hour (0 - 23): ";
    cin >> date.hour;

    while (date.hour < 0 || date.hour > 23)
    {
        cout << "\nInvalid hour input, please reenter.\n\n";
        cout << "Hour (0 - 23): ";
        cin >> date.hour;
    }

    cout << "Minute (0 - 59): ";
    cin >> date.min;

    while (date.min < 0 || date.min > 59)
    {
        cout << "\nInvalid minute input, please reenter.\n\n";
        cout << "Minute (0 - 59): ";
        cin >> date.min;
    }

    cout << "Second (0 - 59): ";
    cin >> date.sec;

    while (date.sec < 0 || date.sec > 59)
    {
        cout << "\nInvalid minute input, please reenter.\n\n";
        cout << "Second (0 - 59): ";
        cin >> date.sec;
    }

    cout << endl;

    counter++;
}