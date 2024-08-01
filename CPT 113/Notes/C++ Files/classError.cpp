
#include <iostream>

using namespace std;

class Class
{
private:
    int val;

public:
    Class() {}
    ~Class() {}
    class divisionByZero {};
    double division(double, double);
};

int main()
{
    double result;
    Class div;
    try
    {
    result = div.division(3, 0);
    cout << result;
    }
    catch(Class::divisionByZero)
    {
        cout << "Error! Divison by zero.\n";
    }

    return 0;
}

double Class::division(double val1, double val2)
{
    if (val2 == 0)
    {
        throw divisionByZero();
    }

    return val1 / val2;
}
