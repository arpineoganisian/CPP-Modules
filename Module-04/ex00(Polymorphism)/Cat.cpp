#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat default constructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
