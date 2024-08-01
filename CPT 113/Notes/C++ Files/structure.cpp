#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name, id;
    double cgpa;
};

int main()
{
    Student stud1 = {"Gordon", "22305460", 3.82};
    Student stud2 = stud1;
    cout << stud1 == stud2;

    return 0;
}