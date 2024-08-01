#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    cout << "---------------------------------------------------\n";
    cout << "Pattern A" << setw(40) << "Pattern B\n";
    cout << "---------------------------------------------------\n";
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "+";
        }
        cout << setw(40 - i) << "";
        for (int k = num; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}