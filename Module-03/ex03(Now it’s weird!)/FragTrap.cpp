#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap \"" << this->name << "\" is created" << std::endl;
	this->hitpoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap) {
	*this = fragTrap;
}

FragTrap& FragTrap::operator=(const FragTrap &fragTrap) {
	if (this == &fragTrap) {
		return *this;
	}
	if (this->name.empty()) {
		std::cout << "Copy of ScavTrap \"" << fragTrap.name << "\" is created" << std::endl;
	} else {
		std::cout << "ScavTrap \"" << this->name
		<< "\" is a copy of \"" << fragTrap.name << "\" now" << std::endl;
	}
	this->name = fragTrap.name;
	this->hitpoints = fragTrap.hitpoints;
	this->energyPoints = fragTrap.energyPoints;
	this->attackDamage = fragTrap.attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->name << " says: \"High fives, guys! 🖐\"" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap \"" << name << "\" is destructed" << std::endl;
}

