#include <iostream>

using namespace std;

// Forward declaration is required
class Class;

class Calc
{
private:
    int result;

public:
    void sum(const Class &);
};

class Class
{
private:
    int data1, data2;

public:
    Class() { data1 = 1; data2 = 2; }
    ~Class() {}
    friend void Calc::sum(const Class &);
};

void Calc::sum(const Class & obj)
{
    cout << obj.data1 << " + " << obj.data2 << " = " << obj.data1 + obj.data2 << endl;
}

int main()
{
    Class cls;
    Calc calc;
    calc.sum(cls);

    return 0;
}
