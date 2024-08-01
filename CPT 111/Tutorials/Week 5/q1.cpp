#include <iostream>

using namespace std;

int main()
{
    int value, sum;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> value;
        if (value >= 0)
        {
            for (int i = 0; i <= value; i++)
            {
                sum += i;
            }
            cout << "The sum until the integer " << value << " is " << sum << ".\n";
        }
        else
        {
            cout << "You can only enter a positive starting number.\n\n";
        }
    } while (value < 0);

    return 0;
}