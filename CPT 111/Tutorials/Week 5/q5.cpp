#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i = 5;
    cout << "Calories Burned Based On Minutes\n\n";
    while (i <= 30)
    {
        cout << setw(2) << left << i << " minutes: " << setw(3) << right << 3.6 * i << " cal\n";
        i += 5;
    }

    return 0;
}