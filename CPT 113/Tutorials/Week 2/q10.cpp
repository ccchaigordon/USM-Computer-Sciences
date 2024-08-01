#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct PayHourly
{
    double hoursWorked, hourlyRate;
};

struct PaySalary
{
    double salary, bonus;
};

union PayType
{
    PayHourly hourly;
    PaySalary salary;
};

int main()
{
    PayType work;
    int option;
    double totalPay = 0;

    cout << "Enter your work type:\n";
    cout << "1. Paid Hourly\n2. Paid By Salary With Bonuses\n\n> ";
    cin >> option;

    while (option != 1 && option != 2)
    {
        cout << "\n[Invalid input, please reenter]\n\n";
        cout << "Enter your work type:\n";
        cout << "1. Paid Hourly\n2. Paid By Salary With Bonuses\n\n> ";
        cin >> option;
    }

    switch (option)
    {
    case 1:
        cout << "\nHours worked: ";
        cin >> work.hourly.hoursWorked;

        while (work.hourly.hoursWorked < 0 || work.hourly.hoursWorked > 80)
        {
            cout << "\n[Please only enter positive values and make sure it is less than 80 hours]\n\n";
            cout << "Hours worked: ";
            cin >> work.hourly.hoursWorked;
        }

        cout << "Hourly rate: ";
        cin >> work.hourly.hourlyRate;

        while (work.hourly.hourlyRate < 0)
        {
            cout << "\n[Please only enter positive values]\n\n";
            cout << "Hourly rate: ";
            cin >> work.hourly.hourlyRate;
        }

        totalPay = work.hourly.hoursWorked * work.hourly.hourlyRate;
        cout << "\nTotal Pay: RM " << fixed << setprecision(2) << totalPay;

        break;

    default:
        cout << "\nBase salary: ";
        cin >> work.salary.salary;

        while (work.salary.salary < 0)
        {
            cout << "\n[Please only enter positive values]\n\n";
            cout << "Base salary: ";
            cin >> work.salary.salary;
        }

        cout << "Bonuses: ";
        cin >> work.salary.bonus;

        while (work.salary.bonus < 0)
        {
            cout << "\n[Please only enter positive values]\n\n";
            cout << "Bonuses: ";
            cin >> work.salary.bonus;
        }

        totalPay = work.salary.salary + work.salary.bonus;
        cout << "\nTotal Pay: RM " << fixed << setprecision(2) << totalPay;

        break;
    }

    return 0;
}