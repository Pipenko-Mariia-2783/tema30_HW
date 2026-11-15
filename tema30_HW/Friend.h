#pragma once
#include "Contact.h"
class Friend : 
	public Contact
{
protected: 
	string adress;
	string birth;
public:
	Friend();
	Friend(string name, string phoneNum,string adress,string birth);
	void setAdress(string adress);
	void setBirth(string birth);
	string getAdress()const;
	string getBirth()const;

	void show()const;
	void edit(string name, string phoneNum, string adress, string birth);
};

