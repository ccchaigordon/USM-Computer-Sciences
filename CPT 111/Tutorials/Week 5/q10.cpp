#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int num, guess, guessCount = 0, lowerLimit = 1, upperLimit = 1000;
    unsigned seed = time(0);
    srand(seed);
    num = rand() % 1000;
    do
    {
        cout << "Enter your guess: (" << lowerLimit << " - " << upperLimit << ") ";
        cin >> guess;
        {
            if (guess > num)
            {
                upperLimit = guess;
                cout << "Too high, try again.\n";
                guessCount += 1;
            }
            else if (guess < num)
            {
                lowerLimit = guess;
                cout << "Too low, try again.\n";
                guessCount += 1;
            }
        }
    } while (guess != num);
    guessCount += 1;
    cout << "Congratulations, you have guessed the number correctly with " << guessCount << " tries! (" << num << ")";

    return 0;
}