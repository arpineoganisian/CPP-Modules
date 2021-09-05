#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	Weapon *weapon;
	std::string name;
public:
	HumanA(const std::string &name, Weapon &weapon);
	void attack();
	void setWeapon(Weapon &weapon);
	virtual ~HumanA();
};

#endif //HUMANA_HPP
