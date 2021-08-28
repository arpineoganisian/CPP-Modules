#ifndef	CONTACT_HPP
#define CONTACT_HPP

class Contact{

private:
	short index;
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

public:
	Contact();

	void setIndex(short index);

	void setFirstName(const std::string &firstName);

	void setLastName(const std::string &lastName);

	void setNickname(const std::string &nickname);

	void setPhoneNumber(const std::string &phoneNumber);

	void setDarkestSecret(const std::string &darkestSecret);

};

#endif