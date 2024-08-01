#include <iostream>

using namespace std;

int main()
{
    int count = 0, num, sum;
    while (count < 10)
    {
        cout << "Enter a negative number: ";
        cin >> num;
        if (count == 10)
        {
            break;
        }
        else if (num < 0)
        {
            count += 1;
            sum += num;
        }
    }
    cout << "The sum of the negative numbers entered is: " << sum;

    return 0;
}