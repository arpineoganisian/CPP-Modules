#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* zombieArray = new Zombie[N];
	Zombie* ptr;
	ptr = zombieArray;
	for (int i = 0; i < N; i++) {
		ptr->setName(name);
		ptr++;
	}
	return zombieArray;
}