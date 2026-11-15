#include "Colleague.h"

Colleague::Colleague()
{
    adress = "undefined";
    faks = "+380-00-000-00-00";
    personForContact = "undefined";
}

Colleague::Colleague(string name, string phoneNum, string adress, string faks, string personForContact)
    :Contact(name,phoneNum)
{
    this->adress = adress;
    this->faks = faks;
    this->personForContact = personForContact;
}

void Colleague::setAdress(string adress)
{
    this->adress = adress;
}

void Colleague::setFaks(string faks)
{
    this->faks = faks;

}

void Colleague::setPersonForContacts(string personForContacts)
{
    this->personForContact = personForContact;

}

string Colleague::getAdress() const
{
    return adress;
}

string Colleague::getFaks() const
{
    return faks;
}

string Colleague::getPersonForContacts() const
{
    return personForContact;
}

void Colleague::show() const
{
    Contact::show();
    cout << "Adress: " << adress << endl;
    cout << "Faks: " << faks << endl;
    cout << "Person for contact: " << personForContact << endl;
}

void Colleague::edit(string name, string phoneNum, string adress, string faks, string personForContact)
{
    Contact::edit(name, phoneNum);
    this->adress = adress;
    this->faks = faks;
    this->personForContact = personForContact;
}
