#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class Phonebook {
private:
	Contact contact[8];
	short orderNumber;

public:
	Phonebook();
	void addContact();
};

#endif
