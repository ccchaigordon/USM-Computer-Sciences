#include <iostream>
using namespace std;
class ABC
{
private:
    int x;
    int y;

public:
    void setVal(int j, int k)
    {
        x = j;
        y = k;
    }
    ABC()
    {
        x = 1;
        y = 1;
    }
    ABC(int, int);
    void show();
};
ABC::ABC(int a, int b)
{
    x = a;
    y = b;
}
void ABC::show()
{
    cout << x << " " << y << endl;
}

class ICE : public ABC
{
    int z;

public:
    void incVal();
    void show();
    ICE() { z = 0; }
    int sum();
    ~ICE() {}
};
int ICE::sum()
{
    return (x + y + z);
}
void ICE::show()
{
    ABC::show();
    cout << z << endl;
}