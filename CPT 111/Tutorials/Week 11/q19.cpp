#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int max_index = 0, max2_index = 0, arr[size];

    // Letting user input the even numbers
    for (int i = 0; i < size; i++)
    {
        cout << "Enter even number " << i + 1 << ": ";
        cin >> arr[i];
        if (arr[i] % 2 != 0)
        {
            i--;
            cout << "Please enter even numbers only!\n\n";
        }
    }

    // Start checking from second element
    for (int i = 1; i < size; i++)
    {
        if ((arr[i] > arr[max_index]) && (arr[i] % 2 == 0))
        {
            max2_index = max_index;
            max_index = i;
        }
        else if ((arr[i] > arr[max2_index]) && (arr[i] % 2 == 0))
        {
            max2_index = i;
        }
    }

    cout << "The highest even number entered is " << arr[max_index] << endl;
    cout << "The second highest even numbered entered is " << arr[max2_index];

    return 0;
}