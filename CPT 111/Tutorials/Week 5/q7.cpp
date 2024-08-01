#include <iostream>

using namespace std;

int main()
{
    int i = 1, firstValue, secondValue, totalNum, diff;
    cout << "Enter the first value of the series: ";
    cin >> firstValue;
    cout << "Enter the second value of the series: ";
    cin >> secondValue;
    cout << "Enter the number of values to be displayed: ";
    cin >> totalNum;
    diff = secondValue - firstValue;
    if (totalNum > 0)
    {
        if (firstValue + ((totalNum - 1) * diff) < 100)
        {
            for (int i = 1; i <= totalNum; i++)
            {
                cout << i << ". ";
                cout << firstValue + ((i - 1) * diff) << endl;
            }
        }
        else
        {
            while (firstValue + ((i - 1) * diff) < 100)
            {
                cout << i << ". ";
                cout << firstValue + ((i - 1) * diff) << endl;
                i += 1;
            }
        }
    }
    else
    {
        cout << "The number of values to be displayed must be greater than 0.";
    }

    return 0;
}