#include <iostream>

using namespace std;

int main()
{
    int n, value, posCount = 0, negCount = 0;
    do
    {
        cout << "Enter a positive integer within 10 to 20: ";
        cin >> n;
    } while (n < 10 || n > 20);
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter a number: ";
        cin >> value;
        if (value >= 0)
        {
            posCount += 1;
        }
        else
        {
            negCount += 1;
        }
    }
    cout << "There are " << posCount << " positive numbers and " << negCount << " negative numbers entered.";

    return 0;
}