#include "Animal.hpp"

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << BRIGHTYELLOW << "Animal constructor" << RESETCOLOR << std::endl;
}

Animal::Animal(const Animal &animal) {
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
	if (this != &animal) {
		this->type = animal.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << BRIGHTYELLOW <<  "Animal destructor" << RESETCOLOR << std::endl;
}

const std::string &Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << BRIGHTYELLOW << "Animal makeSound method" << RESETCOLOR << std::endl;
}
