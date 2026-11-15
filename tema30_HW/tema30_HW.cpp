#include "Contact.h"
#include "Person.h"
#include "AllContacts.h"

int main()
{
    AllContacts a;
    /*a.edit("Mariia", "+949494944");
    a.show();

    Person b;
    b.edit("Alice", "+6453645", "Kyiv");
    b.show();*/
    a.addContact(new Contact("Mariia", "+38 067 845 94 44"));

    a.findContactByName("Toy Factory");
    a.findContactByName("Lina");
    a.findContactByPhoneNum("+380 68 058 47 33");
    a.showAllContacts();
}