#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name, id, desasiswa;
    int year, sem;
    float cgpa;

public:
    Student();
    void mutateFunction();
    void accessFunction() const;
    ~Student();
};

Student::Student()
{
    name = id = desasiswa = "";
    year = sem = 0;
    cgpa = 0.0;
}

void Student::mutateFunction()
{
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your desasiswa: ";
    cin >> desasiswa;
    cout << "Enter your year of study: ";
    cin >> year;
    cout << "Enter your semester of study: ";
    cin >> sem;
    cout << "Enter your CGPA: ";
    cin >> cgpa;

    accessFunction();
}

void Student::accessFunction() const
{
    cout << "\nName: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Desasiswa: " << desasiswa << endl;
    cout << "Year of Study: " << year << endl;
    cout << "Semester of Study: " << sem << endl;
    cout << "CGPA: " << cgpa << endl;
}

Student::~Student() {}

int main()
{
    Student stud1;
    stud1.mutateFunction();

    return 0;
}