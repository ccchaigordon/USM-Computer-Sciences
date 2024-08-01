#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char ch;
    int guess;
    unsigned(seed) = time(0);
    srand(seed);
    ch = (rand() % (126 - 32 + 1)) + 32;
    cout << "Enter your guess of character in ASCII code: ";
    cin >> guess;
    while (int(ch) != guess)
    {
        if (int(ch) > guess)
        {
            cout << "Symbol's ASCII too low, try again: ";
            cin >> guess;
        }
        else
        {
            cout << "Symbol's ASCII too high, try again: ";
            cin >> guess;
        }
    }
    cout << "Congratulations, you've guessed the symbol correctly! The symbol is indeed " << ch << ".";

    return 0;
}