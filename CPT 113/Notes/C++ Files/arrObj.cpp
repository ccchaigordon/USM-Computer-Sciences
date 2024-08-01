#include <iostream>

using namespace std;

class Student
{
private:
    int id, seat;

public:
    Student() {}
    Student(int);
    Student(int, int);
    ~Student() {}
};

Student::Student(int id)
{
    this->id = id;
}

Student::Student(int id, int seat)
{
    this->id = id;
    this->seat = seat;
}

int main()
{
    Student student[3] = {Student(), Student(2), Student(3, 4)};

    return 0;
}
