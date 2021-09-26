#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.h"

class Phonebook {

private:
	Contact contact[8];
	short orderNumber;
	void displayAllContacts();

public:
	Phonebook();
	void addContact();
	void searchContact();
};
#endif //PHONEBOOK_H