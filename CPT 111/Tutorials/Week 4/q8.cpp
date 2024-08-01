#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float weight, distance, charge;
    cout << "Please enter your package weight (kg): ";
    cin >> weight;
    cout << "Please enter the distance to be shipped (miles): ";
    cin >> distance;
    if (weight > 0 && weight <= 20 && distance >= 10 && distance <= 3000)
    {
        if (weight <= 2)
        {
            charge = 1.1 * (distance / 500);
        }
        else if (weight <= 6)
        {
            charge = 2.2 * (distance / 500);
        }
        else if (weight <= 10)
        {
            charge = 3.7 * (distance / 500);
        }
        else
        {
            charge = 4.8 * (distance / 500);
        }
        cout << "Your shipping charge is $" << fixed << setprecision(2) << charge << ".";
    }
    else
    {
        if ((weight <= 0 && weight <= 20) && (distance < 10 || distance > 3000))
        {
            cout << "Both your package weight and shipping distance are not within our support range.";
        }
        else if (distance < 10 || distance > 3000)
        {
            cout << "Your package shipping distance is not within our supported range.";
        }
        else
        {
            cout << "Your package weight is not within our support range.";
        }
    }

    return 0;
}