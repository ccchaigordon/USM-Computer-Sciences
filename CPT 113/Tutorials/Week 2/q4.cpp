#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct MovieData
{
    string title;
    string director;
    int year;
    int duration;
};

void displayMovie(const MovieData *);

int main()
{
    MovieData movie1 = {"Minions: The Rise of Gru",
                        "Kyle Balda, Brad Ableson, Jonathan del Val",
                        2022,
                        87};

    MovieData movie2 = {"Frozen II",
                        "Chris Buck, Jennifer Lee",
                        2019,
                        103};

    displayMovie(&movie1);
    displayMovie(&movie2);

    return 0;
}

void displayMovie(const MovieData *movie)
{
    cout << "Movie title: " << (*movie).title << endl;
    cout << "Director(s): " << (*movie).director << endl;
    cout << "Released on: " << (*movie).year << endl;
    cout << "Running time: " << (*movie).duration << " minutes" << endl
         << endl;
}