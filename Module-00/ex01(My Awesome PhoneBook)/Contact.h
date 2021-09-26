#ifndef CONTACT_H
#define CONTACT_H

class Contact {

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
	short getIndex() const;

	const std::string &getFirstName() const;
	const std::string &getLastName() const;
	const std::string &getNickname() const;
	const std::string &getPhoneNumber() const;
	const std::string &getDarkestSecret() const;

};

#endif //CONTACT_H
