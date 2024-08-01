#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Weather
{
    double totalRainfall;
    double highTemp;
    double lowTemp;
    double avgTemp;
};

int main()
{
    Weather weatherMonth[12];
    double totalRainYearly = 0, highTempYearly = 0, lowTempYearly = 0, avgTempYearly = 0;
    int highTempIndex, lowTempIndex;

    // User Inputs
    for (int i = 0; i < 3; i++)
    {
        cout << "(Month " << i + 1 << ")\n";
        cout << "Enter the total rainfall this month: ";
        cin >> weatherMonth[i].totalRainfall;
        cout << "Enter the highest temperature recorded during this month: ";
        cin >> weatherMonth[i].highTemp;

        while (weatherMonth[i].highTemp > 140 || weatherMonth[i].highTemp < -100)
        {
            cout << "[ Please only enter the temperature within the range of -100 and 140 Fahrenheit ]\n";
            cout << "Enter the highest temperature recorded during this month: ";
            cin >> weatherMonth[i].highTemp;
        }

        cout << "Enter the lowest temperature recorded during this month: ";
        cin >> weatherMonth[i].lowTemp;

        while (weatherMonth[i].lowTemp > 140 || weatherMonth[i].lowTemp < -100)
        {
            cout << "[ Please only enter the temperature within the range of -100 and 140 Fahrenheit ]\n";
            cout << "Enter the lowest temperature recorded during this month: ";
            cin >> weatherMonth[i].lowTemp;
        }

        cout << endl;

        weatherMonth[i].avgTemp = (weatherMonth[i].highTemp + weatherMonth[i].lowTemp) / 2;
    }

    // Calculate the weather for whole year

    for (int j = 0; j < 3; j++)
    {
        totalRainYearly += weatherMonth[j].totalRainfall;
        avgTempYearly += weatherMonth[j].avgTemp;

        if (weatherMonth[j].highTemp > highTempYearly)
        {
            highTempYearly = weatherMonth[j].highTemp;
            highTempIndex = j + 1;
        }
        else if (weatherMonth[j].lowTemp < lowTempYearly)
        {
            lowTempYearly = weatherMonth[j].lowTemp;
            lowTempIndex = j + 1;
        }
    }

    // Display the result of calculations
    cout << "Total rainfall of the year: " << totalRainYearly << " inches\n";
    cout << "Average rainfall of the year: " << totalRainYearly / 3 << " inches\n";
    cout << "Highest temperature of the year: " << highTempYearly << " F\n";
    cout << "Lowest temperature of the year: " << lowTempYearly << " F\n";
    cout << "Average temperature of the year: " << avgTempYearly / 3 << " F";

    return 0;
}