#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int seek = -1;
    char ch;
    string line;
    fstream joke("/content/joke.txt", ios::in);
    while (getline(joke, line))
    {
        cout << line << endl;
    }
    fstream punchline("/content/punchline.txt", ios::in);
    punchline.seekg(seek, ios::end);
    punchline.get(ch);
    while (ch != '\n')
    {
        punchline.seekg(seek, ios::end);
        punchline.get(ch);
        seek--;
    }
    getline(punchline, line);
    cout << line;

    joke.close();
    punchline.close();

    return 0;
}