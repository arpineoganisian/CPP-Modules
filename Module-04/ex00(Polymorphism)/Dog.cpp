#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog default constructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
