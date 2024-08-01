#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    cout << "Enter number of rows: ";
    cin >> num;
    cout << endl;
    for (int i = 1; i <= num; i++)
    {
        cout << setw(num - i + 2);
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = num - 1; i >= 1; i--)
    {
        cout << setw(num - i + 2);
        for (int j = num - 1; j >= num - i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}