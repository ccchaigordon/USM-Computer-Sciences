#include <iostream>

using namespace std;

int main()
{
    int sumEven, sumOdd, num;
    for (int i = 1; i < 6; i++)
    {
        cout << "Enter an integer: ";
        cin >> num;
        if (num % 2 == 0)
        {
            sumEven += num;
        }
        else
        {
            sumOdd += num;
        }
    }
    cout << "The sum of even integers entered is " << sumEven << " while the sum of odd integers entered is " << sumOdd << ".";

    return 0;
}