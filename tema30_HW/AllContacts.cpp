#include "AllContacts.h"

AllContacts::AllContacts()
{
	contacts.push_back(new Colleague("Toy Factory", "Kyiv", "+380 96 392 65 48", "+380 68 846 93 73", "Manager Alice"));
	contacts.push_back(new Friend("Jonh", "+380 50 725 73 62", "Lviv", "12.10.2004"));
	contacts.push_back(new Person("Stasy", "+380 68 058 47 33", "Kharkiv"));
}

AllContacts::~AllContacts()
{
	for (auto item : contacts) {
		delete item;
	}
	contacts.clear();
}

void AllContacts::addContact(Contact* obj)
{
	if (obj != nullptr)
		contacts.push_back(obj);
}

void AllContacts::showAllContacts() const
{
	for (auto item : contacts) {
		item->show();
		cout << "------------------------------------" << endl;
	}
}

void AllContacts::findContactByName(string name)
{
	auto result = find_if(contacts.begin(), contacts.end(),
		[name](Contact* item) {return item->getName() == name;});

	if (result == contacts.end()) {
		cout << "not found";
	}
	else {
		cout << "Result: " << endl;
		(*result)->show();
	}
}

void AllContacts::findContactByPhoneNum(string phoneNum)
{
	auto result = find_if(contacts.begin(), contacts.end(),
		[phoneNum](Contact* item) {return item->getPhoneNum() == phoneNum;});

	if (result == contacts.end()) {
		cout << "not found";
	}
	else {
		cout << "Result: " << endl;
		(*result)->show();
	}
}
