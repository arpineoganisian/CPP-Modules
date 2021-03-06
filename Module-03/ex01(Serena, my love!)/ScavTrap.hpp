#ifndef EX01_SERENA__MY_LOVE___SCAVTRAP_HPP
#define EX01_SERENA__MY_LOVE___SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &scavTrap);
	ScavTrap& operator=(const ScavTrap &scavTrap);

	void guardGate();

	virtual ~ScavTrap();
};

#endif //SCAVTRAP_HPP
