#include "WrongAnimal.hpp"
#include "AnsiColors.hpp"

WrongAnimal::WrongAnimal(std::string type) {
	this->type = type;
	std::cout << RED << "Wrong Animal constructor" << RESETCOLOR << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	*this = wrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
	if (this != &wrongAnimal) {
		this->type = wrongAnimal.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED <<  "Wrong Animal destructor" << RESETCOLOR << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << RED << "Wrong Animal makeSound method" << RESETCOLOR << std::endl;
}

const std::string &WrongAnimal::getType() const {
	return type;
}
