#include <iostream>

using namespace std;

// Answer for function prototypes

void qualify();
void noQualify();

int main()
{
    double salary;
    int years;
    cout << "This program will determine if you qualify\n";
    cout << "for our credit card.\n";
    cout << "What is your annual salary? ";
    cin >> salary;
    cout << "How many years have you worked at your ";
    cout << "current job? ";
    cin >> years;

    if (salary >= 17000.0 && years >= 2)
        qualify();
    else
        noQualify();

    return 0;
}

// Answer for function definitions

void qualify()
{
    cout << "\nYou are qualified and that the interest rate is 12% per year.\n";
}

void noQualify()
{
    cout << "\nYou are not qualified because you need to work on your current job for at least two years and make at least $17,000 per year.\n";
}