#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragTrap);
	FragTrap& operator=(const FragTrap &fragTrap);

	void highFivesGuys(void);

	virtual ~FragTrap();
};

#endif //FRAGTRAP_HPP
