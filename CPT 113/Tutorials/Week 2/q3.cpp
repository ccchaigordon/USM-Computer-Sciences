#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Skill
{
    string name;
    string skill;
};

void arrToStruct(Skill *);

int main()
{
    Skill nameSkill[4];
    arrToStruct(nameSkill);

    cout << "-----------------------------\n";
    cout << "       Name\tSkill\n";
    cout << "-----------------------------\n";
    for (int j = 0; j < 4; j++)
    {
        cout << fixed << right << setw(10) << nameSkill[j].name << fixed << right << setw(11) << nameSkill[j].skill << endl;
    }

    return 0;
}

void arrToStruct(Skill *nameSkill)
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> nameSkill[i].name;
        cout << "Enter the skill name of " << nameSkill[i].name << ": ";
        cin >> nameSkill[i].skill;
    }
}