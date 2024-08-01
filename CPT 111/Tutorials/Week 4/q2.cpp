#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    cout << "Enter two numbers for comparison: ";
    cin >> num1 >> num2;
    // conditional statement
    if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 << ".";
    }
    else
    {
        cout << num2 << " is greater than " << num1 << ".";
    }
    // (num1 > num2) ? cout << num1 << " is greater than " << num2 << "." : cout << num2 << " is greater than " << num1 << ".";

    return 0;
}