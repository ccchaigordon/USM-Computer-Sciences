#include <iostream>

using namespace std;

int *point()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int *arr = new int[size];
    return arr;
}

int main()
{
    int x = 1, y = 2, *result = nullptr, i;
    result = point();
    cin >> i;
    cout << result[i];
    delete[] result;

    return 0;
}