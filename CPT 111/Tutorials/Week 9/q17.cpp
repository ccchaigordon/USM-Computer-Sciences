#include <iostream>
#include <iomanip>

using namespace std;

double celsius(double);

int main()
{
    double Fahrenheit, Celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> Fahrenheit;
    Celsius = celsius(Fahrenheit);
    cout << Fahrenheit << " F is equivalent to " << fixed << showpoint << setprecision(2) << Celsius << " degree celsius.";

    return 0;
}

double celsius(double fahrenheit)
{
    return (5.0 / 9 * (fahrenheit - 32));
}