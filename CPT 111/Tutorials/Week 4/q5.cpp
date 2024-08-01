#include <iostream>

using namespace std;

int main()
{
    float weight, height, bmi;
    cout << "Enter your weight in pound: ";
    cin >> weight;
    cout << "Enter your height in inches: ";
    cin >> height;
    bmi = weight * 703 / (height * height);
    if (bmi < 18.5)
    {
        cout << "Your BMI is " << bmi << " and you are underweight.";
    }
    else if (bmi > 25)
    {
        cout << "Your BMI is " << bmi << " and you are overweight.";
    }
    else
    {
        cout << "Your BMI is " << bmi << " and your weight is optimal.";
    }

    return 0;
}