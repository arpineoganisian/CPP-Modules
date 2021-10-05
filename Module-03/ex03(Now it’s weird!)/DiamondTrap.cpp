#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {}

DiamondTrap::DiamondTrap(std::string name) : name(name) {
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) {
	*this = diamondTrap;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	if (this == &diamondTrap) {
		return *this;
	}
	if (this->name.empty()) {
		std::cout << "Copy of ScavTrap \"" << diamondTrap.name << "\" is created" << std::endl;
	} else {
		std::cout << "ScavTrap \"" << this->name
		<< "\" is a copy of \"" << diamondTrap.name << "\" now" << std::endl;
	}
	this->name = diamondTrap.name;
	this->hitpoints = diamondTrap.hitpoints;
	this->energyPoints = diamondTrap.energyPoints;
	this->attackDamage = diamondTrap.attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap() {

}
