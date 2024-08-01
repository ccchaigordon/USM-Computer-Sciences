#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    static int count;
public:
    Student() { count += 1; }
    ~Student() {}
    static int getCount() { return count; }
};

int Student::count = 0;

int main()
{
    Student stud1, stud2, stud3;
    // Printing number of objects
    cout << Student::getCount();

    return 0;
}
