#include <iostream>

using namespace std;

int main()
{
    int birth, year, age;
    cout << "Input current year: ";
    cin >> year;
    cout << "Input your brith year: ";
    cin >> birth;
    age = year - birth;
    if (age >= 18 && age <= 28)
    {
        cout << "You are " << age << " years old and you are eligible!";
    }
    else
    {
        cout << "You are " << age << " years old and you are not eligible!";
    }
    // (age >= 18 && age <= 28) ? cout << "You are " << age << " years old and you are eligible!" : cout << "You are " << age << " years old and you are not eligible!";

    return 0;
}