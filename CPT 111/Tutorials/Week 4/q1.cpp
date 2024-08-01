#include <iostream>

using namespace std;

int main()
{
    float num, abs;
    cout << "Enter a number and its absolute value will be shown: ";
    cin >> num;
    abs = (num >= 0) ? num : -num;
    cout << "The absolute value of " << num << " is " << abs << ".";

    return 0;
}