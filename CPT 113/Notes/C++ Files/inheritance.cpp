#include <iostream>

using namespace std;

class Student
{
protected:
    int age;

public:
    Student() {age = 0; cout << "This runs first when object is created.\n";}
    ~Student() { cout << "This ends last when object is destroyed.";}
};

class Primary : public Student
{
private:
    string name;

public:

    // If the base constructor to be called is the default base constructor then member initialisation list is not required
    Primary() { name = ""; cout << "This runs second when object is created.\n";}
    Primary(string name) {this->name = name; cout << this->name << ": As long as the base constructor to be called is default then no need to explicitly state in derived constructor.\n";}
    ~Primary() { cout << "This ends first when object is destroyed.\n";}
};

int main()
{
    Primary stud1("Gordon");

    return 0;
}
