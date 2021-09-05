#include "Zombie.hpp"

int main() {

	randomChump("Bill");

	Zombie *zombie = newZombie("Paul");
	zombie->announce();
	delete zombie;

	return 0;
}
