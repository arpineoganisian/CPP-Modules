#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << BLUE << "Dog constructor" << RESETCOLOR << std::endl;
}

Dog::Dog(const Dog &dog) {
	*this = dog;
}

Dog Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		this->type = dog.type;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << BLUE << "Dog destructor" << RESETCOLOR << std::endl;
}

void Dog::makeSound() const {
	std::cout << BLUE << "Woof!" << RESETCOLOR << std::endl;
}
