#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int num1, num2, studentAns, actualAns;
    unsigned seed = time(0);
    srand(seed);
    num1 = rand() % 1000;
    num2 = rand() % 1000;
    cout << "Please enter your answer for " << num1 << " + " << num2 << ": ";
    cin >> studentAns;
    actualAns = num1 + num2;
    (studentAns == actualAns) ? cout << "Congratulations! " << num1 << " + " << num2 << " is indeed " << actualAns << "." : cout << "Oops, the correct answer for " << num1 << " + " << num2 << " is " << actualAns << ".";

    return 0;
}