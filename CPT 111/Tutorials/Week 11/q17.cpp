#include <iostream>

using namespace std;

double avgArray(int[], int);

int main()
{
    const int SIZE = 10;
    int userNums[SIZE];
    cout << "Enter 10 numbers: ";

    for (int count = 0; count < SIZE; count++)
    {
        cout << "#" << (count + 1) << " ";
        cin >> userNums[count];
    }

    cout << "The average of those numbers is ";
    cout << avgArray(userNums, SIZE) << endl; // Function call

    return 0;
}

double avgArray(int avg[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += avg[i];
    }
    return sum / size;
}