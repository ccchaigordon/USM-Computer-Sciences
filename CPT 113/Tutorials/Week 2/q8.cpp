#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct BinInventory
{
    string desc;
    int numOfParts;
};

void addParts(string, int &);
void removeParts(string, int &);

int main()
{
    int select, action;

    BinInventory bin[10] = {
        {"Valve", 10},
        {"Bearing", 5},
        {"Bushing", 15},
        {"Coupling", 21},
        {"Flange", 7},
        {"Gear", 5},
        {"Gear Housing", 5},
        {"Vacuum Gripper", 25},
        {"Cable", 18},
        {"Rod", 12}};

    while (true)
    {
        cout << "-----------------------------------------------------------------------------------\n";
        cout << "The following shows the part description followed by its latest number in the bin: \n";
        cout << "-----------------------------------------------------------------------------------\n";

        for (int i = 0; i < 10; i++)
        {
            cout << i + 1 << ". " << bin[i].desc << ": " << bin[i].numOfParts << endl;
        }

        cout << endl
             << "Which part would you like to select (1 - 10), -1 to quit the program: ";
        cin >> select;

        while ((select < 1 && select != -1) || select > 10)
        {
            cout << endl
                 << "[Please only enter within the range 1 - 10, -1 to quit the program]\n";
            cout << endl
                 << "Which part would you like to select (1 - 10), -1 to quit the program: ";
            cin >> select;
        }

        if (select == -1)
        {
            cout << "\n[Thank you and have a nice day!]";
            break;
        }

        cout << "\nWhich action would you like to perform?\n";
        cout << "1. Increase\n2. Decrease\n\n> ";
        cin >> action;

        while (action != 1 && action != 2)
        {
            cout << endl
                 << "[Please only enter only either 1 or 2]\n";
            cout << "\nWhich action would you like to perform?\n";
            cout << "1. Increase\n2. Decrease\n\n> ";
            cin >> action;
        }

        if (action == 1)
        {
            addParts(bin[select - 1].desc, bin[select - 1].numOfParts);
        }
        else
        {
            removeParts(bin[select - 1].desc, bin[select - 1].numOfParts);
        }

        cout << endl;
    }

    return 0;
}

void addParts(string desc, int &num)
{
    int addAmount;
    cout << "\nHow many " << desc << " would you like to add: ";
    cin >> addAmount;

    while (addAmount <= 0)
    {
        cout << "\n[Please enter a value greater than 0]\n";
        cout << "\nHow many " << desc << " would you like to add: ";
        cin >> addAmount;
    }

    while (num + addAmount > 30)
    {
        cout << "\n[The final number of parts must not exceed 30]\n";
        cout << "\nHow many " << desc << " would you like to add: ";
        cin >> addAmount;
    }

    num += addAmount;

    cout << "\n[Action Done!]\n";
}

void removeParts(string desc, int &num)
{
    int removeAmount;
    cout << "\nHow many " << desc << " would you like to decrease: ";
    cin >> removeAmount;

    while (removeAmount <= 0)
    {
        cout << "\n[Please enter a value greater than 0]\n";
        cout << "\nHow many " << desc << " would you like to decrease: ";
        cin >> removeAmount;
    }

    while (num - removeAmount < 0)
    {
        cout << "\n[The final number of parts must not be less than 0]\n";
        cout << "\nHow many " << desc << " would you like to decrease: ";
        cin >> removeAmount;
    }

    num -= removeAmount;

    cout << "\n[Action Done!]\n";
}