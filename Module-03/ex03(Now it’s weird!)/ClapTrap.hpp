#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
protected:
	std::string name;
	int hitpoints;
	int energyPoints;
	int attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& clapTrap);
	ClapTrap& operator=(const ClapTrap& clapTrap);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setAttackDamage(int attackDamage);

	const std::string &getName() const;
	int getHitpoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

	~ClapTrap();
};

std::ostream& operator<< (std::ostream &out, const ClapTrap &clapTrap);

#endif //CLAPTRAP_HPP
