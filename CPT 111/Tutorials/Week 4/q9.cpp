#include <iostream>

using namespace std;

int main()
{
    float firstTime, secondTime, totalTime;
    cout << "Enter your first half of race time: ";
    cin >> firstTime;
    cout << "Enter your total race time: ";
    cin >> totalTime;
    secondTime = totalTime - firstTime;
    if (firstTime > 0 && totalTime > 0)
    {
        if (secondTime < firstTime)
        {
            cout << "Congratulations! You've done a negative split!\n";
        }
        else
        {
            cout << "You didn't manage to perform a negative split. Don't give up and try harder!";
        }
    }
    else
    {
        cout << "Invalid time input!";
    }

    return 0;
}