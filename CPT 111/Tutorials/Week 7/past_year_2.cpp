#include <iostream>

using namespace std;

int main()
{
    int num, sumOdd = 0, oddCount = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter an integer: ";
        cin >> num;
        if (num % 2 == 0)
        {
            continue;
        }
        sumOdd += num;
        oddCount += 1;
    }
    cout << "There are " << oddCount << " odd numbers entered and their sum is " << sumOdd << ".";

    return 0;
}