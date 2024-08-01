#include "data.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Person Data

void PersonData::setData()
{
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cin.ignore();
    cout << "Enter your address: ";
    getline(cin, address);
    cout << "Enter your state: ";
    getline(cin, state);
    cout << "Enter your city: ";
    cin >> city;
    cout << "Enter your zip: ";
    cin >> zip;
    cout << "Enter your phone number: ";
    cin >> phone;
}

void PersonData::getData() const
{
    cout << "Name: " << firstName + " " + lastName << endl;
    cout << "Address: " << address << endl;
    cout << "State: " << state << endl;
    cout << "City: " << city << endl;
    cout << "Zip: " << zip << endl;
    cout << "Phone number: " << phone << endl;
}

// Customer Data

void CustomerData::setCust()
{
    char mail;
    cout << "Enter your customer number: ";
    cin >> customerNumber;
    cout << "Do you wish to be on a mailing list (Y/N)?\n\n> ";
    cin >> mail;
    cout << endl;

    (toupper(mail) == 'Y') ? mailingList = true : mailingList = false;
}

void CustomerData::getCust() const
{
    cout << "Customer number: " << customerNumber << endl;
    cout << "Mailing list: " << mailingList;
}