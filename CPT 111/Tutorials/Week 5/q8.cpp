#include <iostream>

using namespace std;

int main()
{
    int orinum, num, revnum;
    do
    {
        cout << "Please insert a nonnegative value: ";
        cin >> num;
        orinum = num;
    } while (num < 0);
    cout << num << " has the reverse of ";
    while ((num * 10) / 10 != 0)
    {
        revnum = (10 * revnum) + (num % 10);
        num /= 10;
    }
    cout << revnum << ".\n";
    if (orinum == revnum)
    {
        cout << orinum << " is a palindrome.";
    }
    else
    {
        cout << orinum << " is not a palindrome.";
    }

    return 0;
}