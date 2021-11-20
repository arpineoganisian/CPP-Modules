#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
#include "AnsiColors.hpp"

class Animal {
protected:
	std::string type;
	Animal(std::string type = "Animal");
public:
	Animal(const Animal &animal);
	Animal& operator=(const Animal &animal);
	virtual ~Animal();

	const std::string &getType() const;

	virtual void makeSound() const = 0;
};


#endif //ANIMAL_HPP
