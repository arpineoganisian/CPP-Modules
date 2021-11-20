#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure constructor" << std::endl;
}

Cure::Cure(const Cure &cure) : AMateria("cure") {
	std::cout << "Cure copy constructor" << std::endl;
	*this = cure;
}

Cure &Cure::operator=(const Cure &cure) {
	std::cout << "Cure assignation operator" << std::endl;
	return *this;
}

Cure::~Cure() {

}

Cure *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "Shoots an ice bolt at " << target.getName() << std::endl;
}
