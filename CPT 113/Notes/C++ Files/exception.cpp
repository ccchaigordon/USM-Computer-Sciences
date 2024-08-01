
#include <iostream>
#include <string>

using namespace std;

template <class T>
double division(T, T);

int main()
{
    try
    {
        double result = division<int>(8, 0);
        cout << result << endl;
    }
    catch (string exception)
    {
        cout << exception << endl;
    }

    return 0;
}

template <class T>
double division(T val1, T val2)
{
    if (val2 == 0)
    {
        string error = "Error! Division by zero.\n";
        throw error;
    }

    return static_cast<double>(val1) / val2;
}
