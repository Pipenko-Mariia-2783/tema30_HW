#include "Person.h"

Person::Person()
{
    adress = "undefined";
}

Person::Person(string name, string phoneNum, string adress)
:Contact(name,phoneNum)
{
    this->adress = adress;
}

void Person::setAdress(string adress)
{
    this->adress = adress;

}

string Person::getAdress() const
{
    return adress;
}

void Person::show() const
{
    Contact::show();
    cout << "Adress: " << adress << endl;
}

void Person::edit(string name, string phoneNum,string adress)
{
    Contact::edit(name,phoneNum);
    this->adress = adress;
}
