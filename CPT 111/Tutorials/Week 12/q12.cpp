#include <iostream>

using namespace std;

int main()
{
    const int row = 3, col = 3;
    int sum_row[3] = {0, 0, 0}, sum_col[3] = {0, 0, 0}, sum_diag1 = 0, sum_diag2 = 0;
    bool luoshu = 1;
    int arr[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};

    // Check if there's repetition
    for (int a = 0; a < row; a++)
    {
        for (int b = 0; b < col; b++)
        {
            for (int c = 0; a < row; a++)
            {
                for (int d = 0; b < col; b++)
                {
                    if ((a != c) && (b != d) && (arr[a][b] == arr[c][d]))
                    {
                        luoshu = 0;
                    }
                }
            }
        }
    }

    // Sum of rows
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum_row[i] += arr[i][j];
        }
        cout << sum_row[i] << endl;
    }

    // Sum of columns
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sum_col[i] += arr[j][i];
        }
        cout << sum_col[i] << endl;
    }

    // Sum of diagonals
    for (int i = 0; i < row; i++)
    {
        sum_diag1 += arr[i][i];
        sum_diag2 += arr[i][row - i - 1];
        cout << sum_diag1 << " " << sum_diag2 << endl;
    }

    // Check whether is luo shu magic square or not
    for (int k = 0; k < row && luoshu == 1; k++)
    {
        if ((sum_row[k] == sum_col[k]) && (sum_col[k] == sum_diag1) && (sum_col[k] == sum_diag2) && (luoshu == 1))
        {
            luoshu = 1;
        }
        else
        {
            luoshu = 0;
        }
    }

    if (luoshu)
    {
        cout << "It is a luo shu magic square.\n";
    }
    else
    {
        cout << "It is not a luo shu magic square.\n";
    }

    return 0;
}