#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << setw(2) << left << i << " = " << right << setw(2) << number * i << endl;
    }

    return 0;
}