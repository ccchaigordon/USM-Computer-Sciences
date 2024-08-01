
#include <iostream>

using namespace std;

void arr();

int main()
{
    arr();

    return 0;
}

void arr()
{
    int **array;
    array = new int* [5]; // 5 rows

    for (int i = 0; i < 5; i++)
    {
        array[i] = new int [6]; // Each row has 6 columns
    }

    // Assigning value to each element

    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 6; k++)
        {
            array[j][k] = k + 1;
        }
    }

    // Printing out the elements
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 6; k++)
        {
            cout << array[j][k] << " ";
        }

        cout << endl;
    }

    // Releasing the memory
    for (int i = 0; i < 5; i++)
    {
        delete [] array[i];
    }

    delete [] array;
}
