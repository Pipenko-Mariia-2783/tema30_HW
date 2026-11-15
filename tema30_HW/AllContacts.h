#pragma once
#include "Colleague.h"
#include "Contact.h"
#include "Friend.h"
#include "Person.h"
#include <vector>

class AllContacts
{
	vector<Contact*>contacts;
public:
	AllContacts();
	~AllContacts();

	void addContact(Contact* obj);
	void showAllContacts()const;
	void findContactByName(string name);
	void findContactByPhoneNum(string phoneNum);
};

