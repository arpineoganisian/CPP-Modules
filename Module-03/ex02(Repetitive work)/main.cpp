#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	FragTrap one("ONE");
	FragTrap two("TWO");

	std::cout << one << std::endl;
	std::cout << two << std::endl;
	std::cout << std::endl;

	one.attack("THREE");
	two.takeDamage(one.getAttackDamage());
	std::cout << std::endl;

	std::cout << one << std::endl;
	std::cout << two << std::endl;
	std::cout << std::endl;

	one.highFivesGuys();
}
