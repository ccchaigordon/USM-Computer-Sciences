#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    string lastName, firstName;
    double salary, payInc, updatedSal;
    fstream inFile("/content/inPay.txt", ios::in);
    fstream outFile("/content/outPay.txt", ios::out);
    while (!inFile.eof())
    {
        inFile >> lastName >> firstName >> salary >> payInc;
        updatedSal = salary * 1.05;
        outFile << firstName << " " << lastName << " " << fixed << setprecision(2) << updatedSal << endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}