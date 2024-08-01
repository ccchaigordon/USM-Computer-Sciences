#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num == 2 || num == 3)
    {
        cout << num << " is a prime number.";
    }
    else if (num % 2 == 0)
    {
        cout << num << " is not a prime number.";
    }
    else
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                cout << num << " is not a prime number.";
            }
            else if (i + 1 > sqrt(num) && num % i != 0)
            {
                cout << num << " is a prime number.";
            }
        }
    }

    return 0;
}