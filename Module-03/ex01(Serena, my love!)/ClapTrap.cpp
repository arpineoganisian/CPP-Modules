#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
			name(name), hitpoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap \"" << name << "\" is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	*this = clapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
	if (this == &clapTrap) {
		return *this;
	}
	if (this->name.empty()) {
		std::cout << "Copy of ClapTrap \"" << clapTrap.name << "\" is created" << std::endl;
	} else {
		std::cout << "ClapTrap \"" << this->name
				<< "\" is a copy of \"" << clapTrap.name << "\" now" << std::endl;
	}
	this->name = clapTrap.name;
	this->hitpoints = clapTrap.hitpoints;
	this->energyPoints = clapTrap.energyPoints;
	this->attackDamage = clapTrap.attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap \"" << name << "\" attacks \"" << target << "\" causing "
			<< attackDamage << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (energyPoints > 0) {
		std::cout << "ClapTrap \"" << name << "\" is damaged. Hitpoints left: "
				<< (hitpoints -= amount) << std::endl;
		energyPoints--;
	}
	else {
		std::cout << "ClapTrap \"" << name << "\" doesn't have enough energy! "
											  "Repair needed" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap \"" << name << "\" is repaired. Hitpoints left: "
			<< (hitpoints += amount) << std::endl;
	energyPoints = 10;
}

void ClapTrap::setAttackDamage(int attackDamage) {
	std::cout << "Attack damage of ClapTrap \"" << name << "\" is "
			<< (this->attackDamage = attackDamage) << std::endl;
}

const std::string &ClapTrap::getName() const {
	return name;
}

int ClapTrap::getHitpoints() const {
	return hitpoints;
}

int ClapTrap::getEnergyPoints() const {
	return energyPoints;
}

int ClapTrap::getAttackDamage() const {
	return attackDamage;
}


ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap \"" << name << "\" is destructed" << std::endl;
}

std::ostream& operator<< (std::ostream &out, const ClapTrap &clapTrap) {
	out << "ClapTrap \"" << clapTrap.getName() << "\" "
		<< &clapTrap << ": {hitpoints: " << clapTrap.getHitpoints()
		<< " | energy: " << clapTrap.getEnergyPoints()
		<< " | attack damage: " << clapTrap.getAttackDamage() << "} ";
	return out;
}