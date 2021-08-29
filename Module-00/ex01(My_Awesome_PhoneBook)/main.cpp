#include <iostream>
#include "Phonebook.h"

void print_prompt() {
	std::cout << "Enter ADD to add new contact,\n"
				 "      SEARCH to display a list of contacts,\n"
				 "      EXIT to exit the program\n"
				 "-> ";
}

int main() {

	std::string command;
	Phonebook phonebook;

	std::cout << "\033[34mWelcome to Awesome PhoneBook!" << std::endl;
	while (true) {
		print_prompt();
		std::cin >> command;
		if (command.compare("EXIT") == 0) {
			return 0;
		} else if (command.compare("ADD") == 0) {
			phonebook.addContact();
		} else if (command.compare("SEARCH") == 0) {
			phonebook.searchContact();
		} else {
			std::cout << "No such command" << std::endl;
		}
	}
}
