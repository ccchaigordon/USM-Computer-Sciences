#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    char ch;
    string filename;
    int wordLength = 0;
    cout << "Enter the name of the file: ";
    cin >> filename;
    filename = "/content/" + filename + ".txt";
    fstream file(filename, ios::in);
    if (file)
    {
        while (file.get(ch))
        {
            wordLength += 1;
            if (ch == ' ' || ch == '\n') // Detect if the word is complete
            {
                if (wordLength >= 10) // Print the word with length >= 10
                {
                    file.seekg(-wordLength, ios::cur);
                    for (int i = 0; i < wordLength; i++)
                    {
                        file.get(ch);
                        cout << ch;
                    }
                }
                wordLength = 0;
            }
        }
    }

    file.close();

    return 0;
}