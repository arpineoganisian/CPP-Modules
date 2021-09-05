#include "HumanA.hpp"

HumanA::HumanA( const std::string &name, Weapon &weapon) : weapon(&weapon),
																name(name) {}
void HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType()
			<< std::endl;
}

void HumanA::setWeapon(Weapon &weapon) {
	HumanA::weapon = &weapon;
}

HumanA::~HumanA() {}
