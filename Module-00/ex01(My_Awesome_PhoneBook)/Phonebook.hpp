#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class Phonebook {
private:
	Contact contact[8];
	short orderNumber;
	void promptToNewField(std::string field);

public:
	Phonebook();
	void addContact();
};

#endif
