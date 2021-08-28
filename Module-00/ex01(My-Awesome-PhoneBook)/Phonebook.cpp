#include "Phonebook.hpp"

Phonebook::Phonebook() {
	this->orderNumber = 0;
}

void Phonebook::addContact() {

	if (this->orderNumber < 8) {
		this->orderNumber++;
	} else
		this->orderNumber = 1;

	this->contact[orderNumber-1]
}
