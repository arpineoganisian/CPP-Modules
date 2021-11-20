#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria("Ice") {
	std::cout << "Ice copy constructor" << std::endl;
	*this = ice;
}

Ice &Ice::operator=(const Ice &Ice) {
	std::cout << "Ice assignation operator" << std::endl;
	return *this;
}

Ice::~Ice() {

}

Ice *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	AMateria::use(target);
}
