#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int line = 0;
    string filename, str;
    cout << "Enter file name: ";
    cin >> filename;
    filename = "/content/" + filename + ".txt";
    fstream inFile(filename, ios::in);
    if (inFile)
    {
        while (!inFile.eof())
        {
            getline(inFile, str);
            line += 1;
            if (line % 2 != 0)
            {
                cout << line << ". " << str << endl;
            }
        }
    }
    else
    {
        cout << "Failed to open file.";
    }

    inFile.close();

    return 0;
}