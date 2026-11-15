#pragma once
#include "Contact.h"
class Colleague :
    public Contact
{
protected:
    string adress;
    string faks;
    string personForContact;
public:
    Colleague();
    Colleague(string name, string phoneNum, string adress, string faks,string personForContact);

    void setAdress(string adress);
    void setFaks(string faks);
    void setPersonForContacts(string personForContacts);
    string getAdress()const;
    string getFaks()const;
    string getPersonForContacts()const;

    void show()const;
    void edit(string name, string phoneNum, string adress, string faks, string personForContact);

};

