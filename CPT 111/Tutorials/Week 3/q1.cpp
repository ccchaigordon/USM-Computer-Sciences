#include <iostream>

using namespace std;

int main()
{
    const int total = 30, calPerServing = 300, serving = 10, cookiePerServing = 3;
    double calPerCookie = calPerServing / cookiePerServing;
    int numEaten, totalCal;
    cout << "How many cookies have you eaten: ";
    cin >> numEaten;
    totalCal = numEaten * calPerCookie;
    cout << "Total calories consumed: " << totalCal << ".";

    return 0;
}