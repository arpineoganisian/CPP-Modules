#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) {
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(const AMateria &aMateria) {
	std::cout << "AMateria copy constructor" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &aMateria) {
	std::cout << "AMateria assignation operator" << std::endl;
}

AMateria::~AMateria() {

}

std::string const &AMateria::getType() const {

}

void AMateria::use(ICharacter &target) {

}
