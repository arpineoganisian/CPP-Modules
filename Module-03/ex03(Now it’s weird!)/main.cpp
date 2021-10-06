#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap rihanna("Rihanna");
	std::cout << std::endl;

	std::cout << rihanna << std::endl;
	std::cout << std::endl;

	rihanna.whoAmI();
	std::cout << std::endl;

	rihanna.guardGate();
	rihanna.highFivesGuys();
	std::cout << std::endl;
}
