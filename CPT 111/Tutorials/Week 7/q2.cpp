#include <iostream>

using namespace std;

int main()
{
    int n, count = 1;
    cout << "Enter a positive integer less than 50: ";
    cin >> n;
    if (n > 0 && n < 50)
    {
        cout << "1";
        for (int i = 2; count < n; i++)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    cout << ", " << i;
                    count += 1;
                    break;
                }
            }
        }
        cout << ".";
    }
    else
    {
        cout << "The integer should be less than 50 and greater than 0!";
    }

    return 0;
}