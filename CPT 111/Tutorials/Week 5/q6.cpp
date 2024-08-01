#include <iostream>

using namespace std;

int main()
{
    int speed, hour, i = 1;
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> hour;
    if (i >= 1 && speed > 0)
    {
        cout << "Hour Distance Traveled\n";
        cout << "----------------------\n";
        while (i <= hour)
        {
            cout << i << " " << speed * i << endl;
            i += 1;
        }
    }
    else
    {
        cout << "Invalid input, please try again!";
    }

    return 0;
}