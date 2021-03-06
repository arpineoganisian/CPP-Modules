#include "Animal.hpp"

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << BRIGHTYELLOW << "Animal constructor " << this  << RESETCOLOR << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << BRIGHTYELLOW << "Animal copy constructor" << RESETCOLOR << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
	std::cout << BRIGHTYELLOW << "Animal assignation operator" << RESETCOLOR << std::endl;
	if (this != &animal) {
		this->type = animal.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << BRIGHTYELLOW <<  "Animal destructor " << this << RESETCOLOR << std::endl;
}

const std::string &Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << BRIGHTYELLOW << "Animal makeSound method" << RESETCOLOR << std::endl;
}
