#include <iostream>

using namespace std;

int main()
{
    int *ptr = nullptr;
    ptr = new int;
    *ptr = 3;
    cout << *ptr;
    delete ptr;
    ptr = nullptr;

    return 0;
}
