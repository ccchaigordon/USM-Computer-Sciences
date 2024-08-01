#include <iostream>

using namespace std;

// Assumption: All IC cardholders were born earlier than the year 2000.

int main()
{
    long long int icNum, age;
    cout << "Input your IC: ";
    cin >> icNum;
    age = (100 - (icNum / 10000000000)) + 24;
    cout << "The user with IC number " << icNum << " has the age of " << age << ".";

    return 0;
}