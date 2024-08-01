#include <iostream>

using namespace std;

int main()
{
    char character;
    for (int i = 0; i < 128; i++)
    {
        character = i;
        cout << character << " ";
        if ((i + 1) % 16 == 0)
        {
            cout << "\n";
        }
    }

    return 0;
}