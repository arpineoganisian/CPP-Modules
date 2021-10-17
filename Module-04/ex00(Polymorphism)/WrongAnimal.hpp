#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal(std::string type = "Wrong Animal");
	WrongAnimal(const WrongAnimal &wrongAnimal);
	WrongAnimal& operator=(const WrongAnimal &wrongAnimal);
	virtual ~WrongAnimal();

	const std::string &getType() const;

	virtual void makeSound() const;
};


#endif //WRONGANIMAL_HPP
