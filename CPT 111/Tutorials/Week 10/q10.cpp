#include <iostream>

using namespace std;

int getEmp();
int getDays(int);
double getAverage(int, int);

int main()
{
    int emp, days, average;
    emp = getEmp();
    days = getDays(emp);
    average = getAverage(emp, days);
    cout << "The average days out for " << emp << " employees are " << average << " days.\n";

    return 0;
}

int getEmp()
{
    int emp;
    cout << "Enter number of employees: ";
    cin >> emp;
    return emp;
}

int getDays(int emp)
{
    int days, totalDays;
    for (int i = 1; i <= emp; i++)
    {
        cout << "Enter the number of days out for employee " << i << ": ";
        cin >> days;
        totalDays += days;
    }
    return totalDays;
}

double getAverage(int emp, int totalDays)
{
    return totalDays / emp;
}