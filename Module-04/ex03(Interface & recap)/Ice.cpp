#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { }

Ice::Ice(const Ice &ice) {
	this->type = ice.type;
}

Ice &Ice::operator=(const Ice &ice) {
	(void)ice;
	return *this;
}

Ice::~Ice() { }

Ice *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* Shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
