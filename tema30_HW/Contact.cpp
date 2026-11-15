#include "Contact.h"

Contact::Contact()
{
    name = "undefined";
    phoneNum = "+380-00-000-00-00";
}

Contact::Contact(string name, string phoneNum)
{
    this->name = name;
    this->phoneNum = phoneNum;
}

void Contact::setName(string name)
{
    this->name = name;
}

void Contact::setPhoneNum(string phoneNum)
{
    this->phoneNum = phoneNum;
}

string Contact::getName() const
{
    return name;
}

string Contact::getPhoneNum() const
{
    return phoneNum;
}

void Contact::show() const
{
    cout << "Name: " << name << endl;
    cout << "Phone number: " << phoneNum << endl;
}

void Contact::edit(string name, string phoneNum)
{
    this->name = name;
    this->phoneNum = phoneNum;
}
