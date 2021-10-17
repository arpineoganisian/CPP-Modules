#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat"){
	std::cout << MAGENTA << "Wrong Cat constructor" << RESETCOLOR << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) {
	*this = wrongCat;
}

WrongCat WrongCat::operator=(const WrongCat &wrongCat) {
	if (this != &wrongCat) {
		this->type = wrongCat.type;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << MAGENTA << "Wrong Cat destructor" << RESETCOLOR << std::endl;
}



