#include "Friend.h"

Friend::Friend()
{
    adress = "undefined";
    birth = "01.01.0001";
}

Friend::Friend(string name, string phoneNum, string adress, string birth)
{
    this->adress = adress;
    this->birth = birth;
}

void Friend::setAdress(string adress)
{
    this->adress = adress;

}

void Friend::setBirth(string birth)
{
    this->birth = birth;

}

string Friend::getAdress() const
{
    return adress;
}

string Friend::getBirth() const
{
    return birth;
}

void Friend::show() const
{
    Contact::show();
    cout << "Adress: " << adress << endl;
    cout << "Birthday: " << birth << endl;
}

void Friend::edit(string name, string phoneNum, string adress, string birth)
{
    Contact::edit(name, phoneNum);
    this->adress = adress;
    this->birth = birth;
}
