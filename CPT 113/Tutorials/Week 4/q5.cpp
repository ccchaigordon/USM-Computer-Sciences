#include <iostream>
#include <string>

using namespace std;

class Instructor
{
private:
    string firstName, lastName, officeNum;

public:
    Instructor(string, string, string);
    void display() const;
    ~Instructor();
};

Instructor::Instructor(string first, string last, string office)
{
    firstName = first;
    lastName = last;
    officeNum = office;
}

void Instructor::display() const
{
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Office Number: " << officeNum << endl;
}

class Classroom
{
private:
    string buildingNum, roomNum;

public:
    Classroom(string, string);
    void display() const;
    ~Classroom();
};

Classroom::Classroom(string building, string room)
{
    buildingNum = building;
    roomNum = room;
}

void Classroom::display() const
{
    cout << "Building: " << buildingNum << endl;
    cout << "Room: " << roomNum << endl;
}

// Destructor definitions
Instructor::~Instructor() {}
Classroom::~Classroom() {}

int main()
{
    Instructor inst1("Gordon", "Chai", "12345");
    Classroom class1("Building 1", "123");

    inst1.display();
    class1.display();

    return 0;
}