#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string month1, month2, month3;
    double rain1, rain2, rain3, avgRain;
    cout << "Enter the first month: ";
    cin >> month1;
    cout << "Enter the amount rained during the first month (in inches): ";
    cin >> rain1;
    cout << "Enter the second month: ";
    cin >> month2;
    cout << "Enter the amount rained during the second month (in inches): ";
    cin >> rain2;
    cout << "Enter the third month: ";
    cin >> month3;
    cout << "Enter the amount rained during the third month (in inches): ";
    cin >> rain3;
    avgRain = (rain1 + rain2 + rain3) / 3;
    cout << "\nThe average rainfall for " << month1 << ", " << month2 << " and " << month3 << " in inches is " << fixed << setprecision(2) << avgRain << ".";

    return 0;
}