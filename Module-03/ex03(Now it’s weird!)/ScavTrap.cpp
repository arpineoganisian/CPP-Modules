#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap \"" << this->name << "\" is created" << std::endl;
	this->hitpoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) {
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavTrap) {
	if (this == &scavTrap) {
		return *this;
	}
	if (this->name.empty()) {
		std::cout << "Copy of ScavTrap \"" << scavTrap.name << "\" is created" << std::endl;
	} else {
		std::cout << "ScavTrap \"" << this->name
		<< "\" is a copy of \"" << scavTrap.name << "\" now" << std::endl;
	}
	this->name = scavTrap.name;
	this->hitpoints = scavTrap.hitpoints;
	this->energyPoints = scavTrap.energyPoints;
	this->attackDamage = scavTrap.attackDamage;
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap \"" << name << "\" is destructed" << std::endl;
}
