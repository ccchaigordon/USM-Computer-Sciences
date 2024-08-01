
#include <iostream>

using namespace std;

void arrayPass(int *arr)
{
    cout << "Array passed.\n";
}

int main()
{
    int arr[3] = {1, 2, 3};
    arrayPass(arr);

    return 0;
}
