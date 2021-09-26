#include "Zombie.hpp"

int main() {

	int N(10);
	Zombie *zombies = zombieHorde(N, "Hehe");
	Zombie *ptr = zombies;

	for (int i = 0; i < N; i++) {
		ptr->announce();
		ptr++;
	}

	delete[] zombies;

	return 0;
}
