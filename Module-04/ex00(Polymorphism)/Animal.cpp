#include "Animal.hpp"

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << "Animal constructor with default parameter" << std::endl;
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
	std::cout << "Animal destructor" << std::endl;
}

const std::string &Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
	std::cout << "Animal makeSound function" << std::endl;
}
