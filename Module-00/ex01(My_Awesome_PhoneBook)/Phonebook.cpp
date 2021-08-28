#include "Phonebook.hpp"

Phonebook::Phonebook() {
	this->orderNumber = 0;
}

std::string promptAndSaveField(std::string field, std::string strBuf) {
	std::cout << "Enter " << field << ": ";
	std::getline(std::cin, strBuf);
	return strBuf;
}

void Phonebook::addContact() {

	if (this->orderNumber < 8) {
		this->orderNumber++;
	} else
		this->orderNumber = 1;

	std::string strBuf;

	this->contact[orderNumber-1].setIndex(orderNumber);
	this->contact[orderNumber-1].setLastName(
			promptAndSaveField("last name", strBuf));
	this->contact[orderNumber-1].setNickname(
			promptAndSaveField("nickname", strBuf));
	this->contact[orderNumber-1].setPhoneNumber(
			promptAndSaveField("phone number", strBuf));
	this->contact[orderNumber-1].setDarkestSecret(
			promptAndSaveField("darkest secret", strBuf));

}
