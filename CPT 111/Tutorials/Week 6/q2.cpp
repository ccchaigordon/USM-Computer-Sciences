#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string filename, str;
    int row = 1;
    cout << "Enter the file name: ";
    cin >> filename;
    filename = "/content/" + filename + ".txt";
    fstream inFile(filename, ios::in);
    while (getline(inFile, str))
    {
        if (row > 24)
        {
            row = 1;
            cin.ignore();
            getchar();
        }
        cout << row << ". " << str << endl;
        row += 1;
    }
    inFile.close();

    return 0;
}