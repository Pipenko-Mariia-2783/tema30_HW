#pragma once
#include <iostream>
#include <string>
using namespace std;

class Contact
{
protected:
	string name;
	string phoneNum;
public:
	Contact();
	Contact(string name, string phoneNum);

	void setName(string name);
	void setPhoneNum(string phoneNum);

	string getName()const;
	string getPhoneNum()const;

	virtual void show()const;
	virtual void edit(string name, string phoneNum);
};

