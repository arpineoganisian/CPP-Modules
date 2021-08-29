#include <string>
#include "Contact.h"

Contact::Contact() {
	this->index = 0;
}

void Contact::setIndex(short index) {
	Contact::index = index;
}

void Contact::setFirstName(const std::string &firstName) {
	Contact::firstName = firstName;
}

void Contact::setLastName(const std::string &lastName) {
	Contact::lastName = lastName;
}

void Contact::setNickname(const std::string &nickname) {
	Contact::nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
	Contact::phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
	Contact::darkestSecret = darkestSecret;
}

short Contact::getIndex() const {
	return index;
}

const std::string &Contact::getFirstName() const {
	return firstName;
}

const std::string &Contact::getLastName() const {
	return lastName;
}

const std::string &Contact::getNickname() const {
	return nickname;
}

const std::string &Contact::getPhoneNumber() const {
	return phoneNumber;
}

const std::string &Contact::getDarkestSecret() const {
	return darkestSecret;
}
