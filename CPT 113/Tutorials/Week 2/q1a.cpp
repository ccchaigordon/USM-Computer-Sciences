#include <iostream>
#include <string>
#include <iomanip>

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
    Student student;
    cout << "Enter your name: ";
    getline(cin, student.name);
    cout << "Enter your id: ";
    cin >> student.id;
    cout << "Enter your desasiswa: ";
    cin >> student.desasiswa;
    cout << "Enter your year of study: ";
    cin >> student.year;
    cout << "Enter your semester: ";
    cin >> student.semester;
    cout << "Enter your cgpa: ";
    cin >> student.cgpa;

    cout << endl
         << "Name: " << student.name << endl;
    cout << "Student ID: " << student.id << endl;
    cout << "Desasiswa: " << student.desasiswa << endl;
    cout << "Year of study: " << student.year << endl;
    cout << "Semester: " << student.semester << endl;
    cout << "CGPA: " << fixed << setprecision(2) << student.cgpa;
}