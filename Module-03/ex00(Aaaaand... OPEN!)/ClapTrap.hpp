#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
private:
	std::string name;
	int hitpoints;
	int energyPoints;
	int attackDamage;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& clapTrap);
	ClapTrap& operator=(const ClapTrap& clapTrap);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	const std::string &getName() const;

	~ClapTrap();
};

#endif CLAPTRAP_HPP
