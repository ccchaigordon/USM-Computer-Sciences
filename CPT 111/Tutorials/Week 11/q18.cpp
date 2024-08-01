#include <iostream>

using namespace std;

int main()
{
    const int size = 10;
    int min_index = 0, max_index = 0, arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        if (arr[i] > arr[max_index])
        {
            max_index = i;
        }
        else if (arr[i] < arr[min_index])
        {
            min_index = i;
        }
    }
    cout << "The maximum number entered is " << arr[max_index] << endl;
    cout << "The minimum number entered is " << arr[min_index];

    return 0;
}