#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
#include "AnsiColors.hpp"

class Animal {
protected:
	std::string type;
public:
	Animal(std::string type = "Animal");
	Animal(const Animal &animal);
	Animal& operator=(const Animal &animal);
	virtual ~Animal();

	const std::string &getType() const;

	virtual void makeSound() const;
};


#endif //ANIMAL_HPP
