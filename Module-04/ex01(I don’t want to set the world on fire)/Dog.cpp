#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << BLUE << "Dog constructor"<< RESETCOLOR << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &dog) {
	std::cout << BLUE << "Dog copy constructor" << RESETCOLOR << std::endl;
	if (dog.brain) {
		this->brain = new Brain(*dog.brain);
	}
}

Dog Dog::operator=(const Dog &dog) {
	std::cout << BLUE << "Dog assignation operator" << RESETCOLOR << std::endl;
	if (this != &dog) {
		if (this->brain) {
			delete this->brain;
		}
		if (dog.brain) {
			this->brain = new Brain(*dog.brain);
		}
		this->type = dog.type;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << BLUE << "Dog destructor" << RESETCOLOR << std::endl;
	delete this->brain;
}

Brain *Dog::getBrain() const {
	return brain;
}

void Dog::makeSound() const {
	std::cout << BLUE << "Woof!" << RESETCOLOR << std::endl;
}
