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
    Student *stuPtr = stuList;

    for (int i = 0; i < 5; i++)
    {
        cout << "(Student " << i + 1 << ")\n";
        cout << "Enter your name: ";
        getline(cin, stuPtr[i].name);
        cout << "Enter your ID: ";
        cin >> stuPtr[i].id;
        cout << "Enter your desasiswa: ";
        cin >> stuPtr[i].desasiswa;
        cout << "Enter your year of study: ";
        cin >> stuPtr[i].year;
        cout << "Enter your study semester: ";
        cin >> stuPtr[i].semester;
        cout << "Enter your cgpa: ";
        cin >> stuPtr[i].cgpa;
        cin.ignore();
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Name: " << stuPtr[i].name << endl;
        cout << "Student ID: " << stuPtr[i].id << endl;
        cout << "Desasiswa: " << stuPtr[i].desasiswa << endl;
        cout << "Year of study: " << stuPtr[i].year << endl;
        cout << "Semester: " << stuPtr[i].semester << endl;
        cout << "CGPA: " << fixed << setprecision(2) << stuPtr[i].cgpa << endl
             << endl;
    }
}