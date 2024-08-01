
#include <iostream>

using namespace std;

class Class
{
private:
    int x;

public:
    Class(int x = 0) { this->x = x; }
    ~Class() {}
    void setX(const int &x) { this->x = x; }
    void print() const { cout << "x: " << this->x; }
};

int main()
{
    Class *obj1;
    Class oriObj;
    obj1 = &oriObj;
    obj1->setX(7);
    obj1->print();

    return 0;
}
