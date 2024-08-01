#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string name, department, check;
    double gross, bonus, tax, distance, time, speed, cost, sales;
    int sold;
    fstream inFile("/content/inData.txt", ios::in);
    fstream outFile("/content/outData.txt", ios::out);
    outFile << "Name: "; // Name
    getline(inFile, name, ' ');
    outFile << name << " ";
    getline(inFile, name, ' ');
    outFile << name;
    getline(inFile, department);
    outFile << ", Department: " << department << endl;
    inFile >> gross;
    outFile << "Monthly Gross Salary: $" << fixed << setprecision(2) << gross;
    inFile >> bonus;
    outFile << ", Monthly Bonus: " << fixed << setprecision(2) << bonus << "%,\n";
    inFile >> tax;
    outFile << "Taxes: " << fixed << setprecision(2) << tax << "%\n";
    inFile >> distance;
    outFile << "Distance Traveled: " << fixed << setprecision(2) << distance << " miles, ";
    inFile >> time;
    outFile << "Traveling Time: " << fixed << setprecision(2) << time << " hours\nAverage Speed: " << fixed << setprecision(2) << distance / time << " miles per hour\n";
    inFile >> sold;
    outFile << "Number of Coffee Cups Sold: " << sold;
    inFile >> cost;
    outFile << ", Cost: $" << fixed << setprecision(2) << cost << " per cup\n";
    outFile << "Sales Amount = $" << fixed << setprecision(2) << sold * cost;

    inFile.close();
    outFile.close();

    // Checking if the data transferring is success
    outFile.open("/content/outData.txt", ios::in);
    while (getline(outFile, check))
    {
        cout << check << endl;
    }

    outFile.close();

    return 0;
}