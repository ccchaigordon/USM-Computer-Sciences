#include <iostream>
#include <string>

using namespace std;

class SomeClass
{ 
public:
    SomeClass(int val = 0) {value = new int; *value = val;}
    // Copy Constructor
    SomeClass(const SomeClass &obj)
    {
        value = new int;
        *value = *(obj.value);
    }
    ~SomeClass() {delete value; value = nullptr;}
    int getVal();
    void setVal(int);
    int print() const;
private:
    int *value = nullptr;
};

int SomeClass::print() const
{
    return (*value);
}

void SomeClass::setVal(int val)
{
    *value = val;
}

int main()
{
    SomeClass class1(20);
    SomeClass class2 = class1;
    cout << class1.print() << endl;
    cout << class2.print() << endl;
    class2.setVal(8);
    cout << class1.print() << endl;
    cout << class2.print() << endl;

    return 0;
}
