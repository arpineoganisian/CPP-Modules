#include "ClapTrap.hpp"

int main() {

	ClapTrap one("ONE");
	ClapTrap two(one);
	ClapTrap three("THREE");
	ClapTrap four("FOUR");
	four = three;
	std::cout << std::endl;

	std::cout << one << std::endl;
	std::cout << two << std::endl;
	std::cout << three << std::endl;
	std::cout << four << std::endl;
	std::cout << std::endl;

	one.setAttackDamage(1);
	three.setAttackDamage(3);
	std::cout << std::endl;

	one.attack("THREE");
	three.takeDamage(one.getAttackDamage());
	std::cout << std::endl;

	three.attack("ONE");
	one.takeDamage(three.getAttackDamage());
	std::cout << std::endl;

	std::cout << one << std::endl;
	std::cout << three << std::endl;
	std::cout << std::endl;

	one.beRepaired(10);
	std::cout << std::endl;

	std::cout << one << std::endl;
	std::cout << three << std::endl;
	std::cout << std::endl;

	return 0;
}
