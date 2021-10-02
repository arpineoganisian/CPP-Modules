#ifndef EX01_SERENA__MY_LOVE___SCAVTRAP_HPP
#define EX01_SERENA__MY_LOVE___SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20);
	void guardGate();
};

#endif //SCAVTRAP_HPP
