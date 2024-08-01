#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}