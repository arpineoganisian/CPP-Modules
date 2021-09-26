#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie;
Zombie* zombieHorde(int N, std::string name);

class Zombie {
private:
	std::string name;

public:
	Zombie();
	Zombie(const std::string &name);
	void announce();
	void setName(const std::string &name);
	virtual ~Zombie();
};

#endif //ZOMBIE_H
