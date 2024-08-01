#include <iostream>

using namespace std;

// The doSomething function
int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

int main()
{
    int x = 1, y = 2, result = 0;
    result = doSomething(&x, &y);
    cout << result;

    return 0;
}