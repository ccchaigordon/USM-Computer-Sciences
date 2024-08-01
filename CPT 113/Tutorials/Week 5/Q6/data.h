#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>

using namespace std;

// Person Data

class PersonData
{
private:
    string lastName, firstName, address, city, state, zip, phone;

public:
    PersonData() { lastName = firstName = address = city = state = zip = phone = ""; }
    ~PersonData() {}
    void getData() const;
    void setData();
};

// Customer Data

class CustomerData : public PersonData
{
private:
    int customerNumber;
    char mail;
    bool mailingList;

public:
    CustomerData()
    {
        customerNumber = 0;
        mailingList = false;
    }
    ~CustomerData() {}
    void getCust() const;
    void setCust();
};

#endif