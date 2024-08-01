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

    for (int i = 0; i < 5; i++)
    {
        cout << "(Student " << i + 1 << ")\n";
        cout << "Enter your name: ";
        getline(cin, stuList[i].name);
        cout << "Enter your ID: ";
        cin >> stuList[i].id;
        cout << "Enter your desasiswa: ";
        cin >> stuList[i].desasiswa;
        cout << "Enter your year of study: ";
        cin >> stuList[i].year;
        cout << "Enter your study semester: ";
        cin >> stuList[i].semester;
        cout << "Enter your cgpa: ";
        cin >> stuList[i].cgpa;
        cin.ignore();
        cout << endl;
    }

    cout << endl;

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