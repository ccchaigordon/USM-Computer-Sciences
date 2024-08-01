#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Degree to Radians Table\n\n";
    for (int i = 0; i <= 90; i += 10)
    {
        cout << i << "° = " << (i / 180.0) * 3.141593 << fixed << " radians" << endl;
    }

    return 0;
}