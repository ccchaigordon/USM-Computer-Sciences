#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void coinToss(int);

int main()
{
    srand(time(0));
    int tossCount;
    cout << "How many times would you like to toss the coin: ";
    cin >> tossCount;
    for (int i = 0; i < tossCount; i++)
    {
        coinToss(i + 1);
    }

    return 0;
}

void coinToss(int tossNum)
{
    int toss;
    toss = rand() % (2 - 1 + 1) + 1;
    cout << tossNum << ". ";
    if (toss == 1)
    {
        cout << "Heads.\n";
    }
    else
    {
        cout << "Tails.\n";
    }
}