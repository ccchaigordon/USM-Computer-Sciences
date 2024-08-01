#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filename;
    int line = 1, wordCount = 0;
    char ch;
    cout << "Enter the file name: ";
    cin >> filename;
    filename = "/content/" + filename + ".txt";
    fstream file(filename, ios::in);
    cout << "1: ";
    while (file.get(ch))
    {
        if (wordCount > 24)
        {
            cin.ignore();
            getchar();
            wordCount = 0;
            cout << ch;
        }
        else if (ch == '\n' || ch == ' ') // To calculate word count
        {
            if (ch == '\n')
            {
                line += 1;
                wordCount = 1;
                cout << ch << line << ": ";
            }
            else
            {
                wordCount += 1;
                cout << ch;
            }
        }
        else
        {
            cout << ch;
        }
    }

    file.close();

    return 0;
}