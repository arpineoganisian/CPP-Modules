#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { }

Cure::Cure(const Cure &cure) {
	this->type = cure.type;
}

Cure &Cure::operator=(const Cure &cure) {
	(void)cure;
	return *this;
}

Cure::~Cure() { }

Cure *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* Heals " << target.getName() << "’s wounds *" << std::endl;
}
