#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << GREEN << "Cat constructor" << RESETCOLOR << std::endl;
	this->brain = new Brain;
}

Cat::Cat(const Cat &cat) {
	std::cout << GREEN << "Cat copy constructor" << RESETCOLOR << std::endl;
	this->brain = new Brain(*cat.brain);
}

Cat Cat::operator=(const Cat &cat) {
	std::cout << GREEN << "Cat assignation operator" << RESETCOLOR << std::endl;
	if (this != &cat) {
		if (this->brain) {
			delete this->brain;
		}
		if (cat.brain) {
			this->brain = new Brain(*cat.brain);
		}
		this->type = cat.type;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << GREEN << "Cat destructor" << RESETCOLOR << std::endl;
	delete this->brain;
}

Brain *Cat::getBrain() const {
	return brain;
}

void Cat::makeSound() const {
	std::cout << GREEN << "Meow!" << RESETCOLOR << std::endl;
}

