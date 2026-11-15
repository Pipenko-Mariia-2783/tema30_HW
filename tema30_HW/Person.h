#pragma once
#include "Contact.h"
class Person :
    public Contact
{
protected:
    string adress;
public:
    Person();
    Person(string name, string phoneNum,string adress);

    void setAdress(string adress);
    string getAdress()const;

    void show()const;
    void edit(string name, string phoneNum,string adress);
};

