#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int wordCount = 0, sentenceCount = 0;
    string fileName;
    char ch;
    cout << "Enter the file name: ";
    cin >> fileName;
    fileName = "/content/" + fileName + ".txt";
    fstream file(fileName, ios::in);
    file.seekg(0);
    while (file.get(ch))
    {
        if (ch == ' ' || ch == '\n')
        {
            wordCount += 1;
        }
        else if (ch == '.')
        {
            sentenceCount += 1;
        }
    }
    wordCount += 1;
    cout << "\nThere are " << wordCount << " words and " << sentenceCount << " sentence(s) in this file.";

    file.close();

    return 0;
}