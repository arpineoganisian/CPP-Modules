#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << GREEN << "Cat constructor" << RESETCOLOR << std::endl;
}

Cat::Cat(const Cat &cat) {
	*this = cat;
}

Cat Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		this->type = cat.type;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << GREEN << "Cat destructor" << RESETCOLOR << std::endl;
}

void Cat::makeSound() const {
	std::cout << GREEN << "Meow!" << RESETCOLOR << std::endl;
}

