#include <iostream>

using namespace std;

void high_low(double rain[], int size)
{
    int high_id = 0, low_id = 0;
    for (int j = 1; j < size; j++)
    {
        if (rain[j] > rain[high_id])
        {
            high_id = j;
        }
        else if (rain[j] < rain[low_id])
        {
            low_id = j;
        }
    }
    cout << "The month with highest rainfall is month " << high_id + 1 << endl;
    cout << "The month with lowerst rainfall is month " << low_id + 1;
}

int main()
{
    const int size = 12;
    double rainfall[size], sum = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the rainfall for month " << i + 1 << ": ";
        cin >> rainfall[i];
        if (rainfall[i] < 0)
        {
            i--;
            cout << "Please enter only positive numbers: \n\n";
            continue;
        }
        sum += rainfall[i];
    }
    cout << "The total rainfall of the year is " << sum << endl;
    cout << "The average rainfall of the year is " << sum / size << endl;
    high_low(rainfall, size);

    return 0;
}