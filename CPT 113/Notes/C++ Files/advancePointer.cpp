
#include <iostream>

using namespace std;

void array2d();

int main()
{
    array2d();

    return 0;
}

void array2d()
{
    // Declaring a dynamic pointer of arrays aka dynamic 2D array
    int *arr[5]; // The 2D array contains 5 rows

    for (int i = 0; i < 5; i++)
    {
        arr[i] = new int[6]; // Each column has 6 columns
    }

    // Assigning value to each element

    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 6; k++)
        {
            arr[j][k] = k + 1;
        }
    }

    // Printing out the elements
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 6; k++)
        {
            cout << arr[j][k] << " ";
        }

        cout << endl;
    }

    // Releasing the memory for dynamic array
    for (int  a = 0; a < 5; a++)
    {
        delete [] arr[a];
    }
}
