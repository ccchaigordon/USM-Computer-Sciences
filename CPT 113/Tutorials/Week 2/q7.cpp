#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int speakerNum = 3;

struct Speaker
{
    string name;
    string phone;
    string topic;
    double fees;
};

char displayMenu();

int main()
{
    char action;
    int speakerEdit = 0;
    Speaker speakerList[10];

    action = displayMenu();

    switch (action)
    {
    case '1':
        for (int i = 0; i < speakerNum; i++)
        {

            cout << "\n# Speaker " << i + 1 << endl;
            cout << "Name: ";
            getline(cin, speakerList[i].name);
            cout << "Phone Number: ";
            cin >> speakerList[i].phone;
            cout << "Speaking Topic: ";
            cin >> speakerList[i].topic;
            cout << "Fee Required: ";
            cin >> speakerList[i].fees;
            getchar();

            while (speakerList[i].fees < 0)
            {
                cout << "\n[Invalid amount, please enter only positive values]\n\n";
                cout << "Fee Required: ";
                cin >> speakerList[i].fees;
                getchar();
            }
        }
        break;

    case '2':
        cout << "\nWhich speaker would you like to edit: ";
        cin >> speakerEdit;
        getchar();
        cout << "\n# Speaker " << speakerEdit << endl;
        cout << "Name: ";
        getline(cin, speakerList[speakerEdit - 1].name);
        cout << "Phone Number: ";
        cin >> speakerList[speakerEdit - 1].phone;
        cout << "Speaking Topic: ";
        cin >> speakerList[speakerEdit - 1].topic;
        cout << "Fee Required: ";
        cin >> speakerList[speakerEdit - 1].fees;
        getchar();

        while (speakerList[speakerEdit - 1].fees < 0)
        {
            cout << "\n[Invalid amount, please enter only positive values]\n\n";
            cout << "Fee Required: ";
            cin >> speakerList[speakerEdit - 1].fees;
            getchar();
        }

        cout << "\n[Edit completed!]\n\n";

        break;
    }

    cout << endl
         << endl;

    for (int i = 0; i < speakerNum; i++)
    {
        cout << "- Speaker " << i + 1 << " -\n";
        cout << "Name: " << speakerList[i].name << endl;
        cout << "Phone Number: " << speakerList[i].phone << endl;
        cout << "Speaking Topic: " << speakerList[i].topic << endl;
        cout << "Fee Required: " << speakerList[i].fees << endl
             << endl;
    }

    return 0;
}

char displayMenu()
{
    char input;
    cout << "Which action would you like to perform: \n";
    cout << "1. Input speakers\n2. Edit speakers\n\n> ";
    cin >> input;
    getchar();
    while (input != '1' && input != '2')
    {
        cout << "\n[Invalid input, please enter again]\n\n";
        cout << "Which action would you like to perform: \n";
        cout << "1. Input speakers\n2. Edit speakers\n\n> ";
        cin >> input;
        getchar();
    }

    return input;
}