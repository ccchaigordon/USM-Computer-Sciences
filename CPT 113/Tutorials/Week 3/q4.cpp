#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
    int year, month, day;
    string monthStr;

public:
    void printDate(int, int, int);
};

void Date::printDate(int yr, int mth, int date)
{
    year = yr;
    month = mth;
    day = date;

    switch (month)
    {
    case 1:
        monthStr = "January";
        break;
    case 2:
        monthStr = "February";
        break;
    case 3:
        monthStr = "March";
        break;
    case 4:
        monthStr = "April";
        break;
    case 5:
        monthStr = "May";
        break;
    case 6:
        monthStr = "June";
        break;
    case 7:
        monthStr = "July";
        break;
    case 8:
        monthStr = "August";
        break;
    case 9:
        monthStr = "September";
        break;
    case 10:
        monthStr = "October";
        break;
    case 11:
        monthStr = "November";
        break;
    case 12:
        monthStr = "December";
        break;
    }

    cout << endl
         << day << "/" << month << "/" << year << endl;
    cout << monthStr << " " << day << ", " << year << endl;
    cout << day << " " << monthStr << " " << year;
}

int main()
{
    int year, month, day;
    Date date;

    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;

    while (month < 1 || month > 12)
    {
        cout << "Invalid month input, please reenter.\n";
        cout << "Enter month: ";
        cin >> month;
    }

    cout << "Enter day: ";
    cin >> day;

    while (day < 1 || day > 31)
    {
        cout << "Invalid day input, please reenter.\n";
        cout << "Enter day: ";
        cin >> day;
    }

    date.printDate(year, month, day);
}