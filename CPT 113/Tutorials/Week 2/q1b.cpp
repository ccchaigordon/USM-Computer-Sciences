#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

struct Student
{
    string name;
    int id;
    string desasiswa;
    int year;
    int semester;
    double cgpa;
};

int main()
{
    Student stuList[5];
    char temp;
    fstream inFile("input.txt", ios::in);

    for (int i = 0; i < 5; i++)
    {
        inFile >> stuList[i].name;
        inFile >> stuList[i].id;
        inFile >> stuList[i].desasiswa;
        inFile >> stuList[i].year;
        inFile >> stuList[i].semester;
        inFile >> stuList[i].cgpa;
    }

    inFile.close();

    for (int i = 0; i < 5; i++)
    {
        cout << "Name: " << stuList[i].name << endl;
        cout << "Student ID: " << stuList[i].id << endl;
        cout << "Desasiswa: " << stuList[i].desasiswa << endl;
        cout << "Year of study: " << stuList[i].year << endl;
        cout << "Semester: " << stuList[i].semester << endl;
        cout << "CGPA: " << fixed << setprecision(2) << stuList[i].cgpa << endl
             << endl;
    }
}