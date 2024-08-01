
#include <iostream>

using namespace std;

struct Struct
{
    int *p = nullptr;
};

void print(const Struct *str)
{
    cout << *str->p;
}

int main()
{
    Struct str;
    int x = 3;
    str.p = &x;
    print(&str);

    return 0;
}
