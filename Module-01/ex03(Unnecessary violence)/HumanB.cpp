#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name) {}

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType()
	<< std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	HumanB::weapon = &weapon;
}

HumanB::~HumanB() {}



