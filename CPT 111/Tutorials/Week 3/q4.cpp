#include <iostream>

using namespace std;

int main()
{
    const int top = 8848; // Height of Mount Everest in meters
    const int rate = 5;   // Lapse rate in °C per km
    const double metersToFeet = 3.28;
    float degCel, degFe;

    cout << "Temperature in degree Celsius at sea level: ";
    cin >> degCel;

    degFe = (degCel * 1.8) + 32;
    cout << "\nTemperature at sea level in Fahrenheit: " << degFe << "°F" << endl;

    double temp1000mC = degCel - (1000 / 1000.0) * rate;
    double temp2000mC = degCel - (2000 / 1000.0) * rate;
    double temp3000mC = degCel - (3000 / 1000.0) * rate;
    double tempEverestC = degCel - (top / 1000.0) * rate;

    cout << "\nTemperature at 1000m above sea level in degree Celsius: " << temp1000mC << "°C / " << (temp1000mC * 1.8 + 32) << "°F" << endl;
    cout << "Temperature at 2000m above sea level in degree Celsius: " << temp2000mC << "°C / " << (temp2000mC * 1.8 + 32) << "°F" << endl;
    cout << "Temperature at 3000m above sea level in degree Celsius: " << temp3000mC << "°C / " << (temp3000mC * 1.8 + 32) << "°F" << endl;
    cout << "Temperature at the top of Mount Everest in degree Celsius: " << tempEverestC << "°C / " << (tempEverestC * 1.8 + 32) << "°F" << endl;

    double heightAtZeroC = (degCel / rate) * 1000;
    cout << "The height at which the temperature is 0 degree Celsius: " << heightAtZeroC << "m / " << (heightAtZeroC * metersToFeet) << "ft" << endl;

    return 0;
}
