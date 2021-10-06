#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &diamondTrap);
	DiamondTrap& operator=(const DiamondTrap &diamondTrap);

	void attack(std::string const &target);

	void whoAmI();

	virtual ~DiamondTrap();
};

#endif //DIAMONDTRAP_HPP
