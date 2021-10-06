#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {}

DiamondTrap::DiamondTrap(std::string name) :
ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	this->name = name;
	std::cout << "DiamondTrap \"" << this->name << "\" is created" << std::endl;
	this->hitpoints = FragTrap::hitpoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) {
	*this = diamondTrap;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	if (this == &diamondTrap) {
		return *this;
	}
	if (this->name.empty()) {
		std::cout << "Copy of DiamondTrap \"" << diamondTrap.name << "\" is created" << std::endl;
	} else {
		std::cout << "DiamondTrap \"" << this->name
		<< "\" is a copy of \"" << diamondTrap.name << "\" now" << std::endl;
	}
	this->name = diamondTrap.name;
	this->hitpoints = diamondTrap.hitpoints;
	this->energyPoints = diamondTrap.energyPoints;
	this->attackDamage = diamondTrap.attackDamage;
	return *this;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "My DiamondTrap name is \"" << this->name
			<< "\" and ClapTrap name is \"" << ClapTrap::name << "\""
			<< std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap \"" << this->name << "\" is destructed" << std::endl;
}
