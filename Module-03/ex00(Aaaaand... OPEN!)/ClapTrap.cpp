#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
			name(name), hitpoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap \"" << name << "\" is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {

}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
	std::cout << "ClapTrap " << name << " is made as a copy of " << clapTrap.name << std::endl;
}


void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap \"" << name << "\" has been destructed" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap \"" << name << "\" has been " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap \"" << name << "\" has been repaired" << std::endl;
}

const std::string &ClapTrap::getName() const {
	return name;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap \"" << name << "\" is destructed" << std::endl;
}