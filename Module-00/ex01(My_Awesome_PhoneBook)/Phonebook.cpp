#include <iomanip>
#include "Phonebook.h"

Phonebook::Phonebook() {
	this->orderNumber = 0;
}

std::string promptAndSaveField(std::string field) {
	std::string strBuf;
	std::cout << "Enter " << field << ": ";
	std::getline(std::cin, strBuf);
	return strBuf;
}

void Phonebook::addContact() {

	if (this->orderNumber < 8 ) {
		this->orderNumber++;
	} else
		this->orderNumber = 1;

	this->contact[orderNumber-1].setIndex(orderNumber);
	std::cin.ignore();
	this->contact[orderNumber-1].setFirstName(
			promptAndSaveField("first name"));
	this->contact[orderNumber-1].setLastName(
			promptAndSaveField("last name"));
	this->contact[orderNumber-1].setNickname(
			promptAndSaveField("nickname"));
	this->contact[orderNumber-1].setPhoneNumber(
			promptAndSaveField("phone number"));
	this->contact[orderNumber-1].setDarkestSecret(
			promptAndSaveField("darkest secret"));

	std::cout << "Contact has been created!" << std::endl;
}

void printLine() {
	std::cout << "--------------------------------------------" << std::endl;
}

void printField(std::string field)
{
	bool longField = field.length() > 10;
	std::cout << std::setw(longField ? 9 : 10)
			<< std::right
			<< (longField ? field.substr(0, 9) : field);
	if (longField) {
		std::cout << ".";
	}
	std::cout << " | ";
}

void Phonebook::displayAllContacts() {
	printLine();
	int i = 0;
	if (this->contact[0].getIndex() == 0) {
		std::cout << "|               No contacts!               |" << std::endl;
		printLine();
	} else {
		std::cout << "| # | first name | last name  | nickname   |" << std::endl;
		printLine();
		while(i < 8 && this->contact[i].getIndex() != 0) {
			std::cout << "| " << this->contact[i].getIndex() << " | ";
			printField(this->contact[i].getFirstName());
			printField(this->contact[i].getLastName());
			printField(this->contact[i].getNickname());
			std::cout << std::endl;
			printLine();
			i++;
		}
	}
}

void printFullContactInfo(Contact contact)
{
	printLine();
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
	printLine();
}

void Phonebook::searchContact() {

	displayAllContacts();

	if (this->contact[0].getIndex() == 0) { return; }

	std::cout << "Enter contacts's index to display full info\n"
				 "-> ";
	std::cin.ignore();
	std::string strBuf;
	std::getline(std::cin, strBuf);
	bool has_only_digits = (strBuf.find_first_not_of( "0123456789" ) == std::string::npos);
	if (has_only_digits) {
		int desiredContactIndex = std::stoi(strBuf);
		if (desiredContactIndex >= 1 && desiredContactIndex <= 8
			&& this->contact[desiredContactIndex-1].getIndex() != 0) {
			printFullContactInfo(this->contact[desiredContactIndex-1]);
		} else {
			std::cout << "No contact with index " << desiredContactIndex << "!" << std::endl;
		}
	}
	else {
		std::cout << strBuf << " is not a number!" << std::endl;
	}

}
