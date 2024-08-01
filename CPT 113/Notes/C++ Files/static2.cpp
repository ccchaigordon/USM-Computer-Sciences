#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    static string Class;
public:
    Student() {}
    ~Student() {}
    static string getClass() {return Class;}
};

string Student::Class = "Computer Science Class";

int main()
{
    Student stud1, stud2, stud3;
    // Accessing using objects
    cout << stud1.getClass() << endl;
    cout << stud2.getClass() << endl;
    cout << stud3.getClass() << endl;
    // Can be accessed without using objects too
    cout << Student::getClass();

    return 0;
}
