
#include <iostream>
#include <string>

using namespace std;

int numChars(char search, string str, int subscript)
{
    if (subscript >= str.length()) 
    {
        return 0;
    }
    else if (str[subscript] == search)
    {
        return 1 + numChars(search, str, subscript + 1);
    }
    else
    {
        return numChars(search, str, subscript + 1);
    }
}


int main()
{
    cout << numChars('p', "apple", 2);

    return 0;
}
