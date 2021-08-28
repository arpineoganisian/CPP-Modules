#include <string>
#include "Contact.hpp"

Contact::Contact() {
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


}
