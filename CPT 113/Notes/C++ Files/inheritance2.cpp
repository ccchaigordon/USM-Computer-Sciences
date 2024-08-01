#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
    string name;
    int age;

public:
    Student() {}
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    ~Student() {}
};

class Undergraduate: public Student
{
private:
    string id;

public:
    // Using member initialisation list
    Undergraduate(string name, int age, string id) : Student(name, age)
    {
        this->id = id;
    }
    ~Undergraduate() {}
    void print() const;
};

void Undergraduate::print() const
{
    cout << "Name: " << name;
    cout << "\nAge: " << age;
    cout << "\nID: " << id;
}

int main()
{
    Undergraduate stud1("Gordon Chai", 21, "22305460");
    stud1.print();

    return 0;
}
