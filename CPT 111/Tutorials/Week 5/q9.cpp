#include <iostream>

using namespace std;

int main()
{
    char char1, char2;
    int i = 1, repeat1, repeat2, row, column, maxColumn = 0;
    cout << "Enter the first character: ";
    cin >> char1;
    cout << "Enter how many times to repeat the character " << char1 << ": ";
    cin >> repeat1;
    cout << "Enter the second character: ";
    cin >> char2;
    cout << "Enter how many times to repeat the character " << char2 << ": ";
    cin >> repeat2;
    cout << "Enter the rows to be displayed: ";
    cin >> row;
    cout << "Enter the columns to be displayed: ";
    cin >> column;
    while (i <= row)
    {
        for (int j = 1; j <= repeat1; j++)
        {
            cout << char1;
            maxColumn += 1;
            if (maxColumn % column == 0)
            {
                i += 1;
                cout << "\n";
            }
        }
        for (int k = 1; k <= repeat2 && i <= row; k++)
        {
            cout << char2;
            maxColumn += 1;
            if (maxColumn % column == 0)
            {
                i += 1;
                cout << "\n";
            }
        }
    }

    return 0;
}