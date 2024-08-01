#include <iostream>

using namespace std;

// Forward declaration
class Calc;

class Class
{
private:
    int data1, data2;

public:
    Class(int d1 = 0, int d2 = 0) : data1(d1), data2(d2) {}
    ~Class() {}
    friend class Calc;
};

class Calc
{
private:
    int result;

public:
    void sum(const Class &);
};

void Calc::sum(const Class & obj)
{
    cout << obj.data1 << " + " << obj.data2 << " = " << obj.data1 + obj.data2;
}

int main()
{
    Class cls(5, 10);  // Initializing data members
    Calc calc;
    calc.sum(cls);

    return 0;
}
