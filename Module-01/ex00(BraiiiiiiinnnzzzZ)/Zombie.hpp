#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie;
void randomChump(std::string name);
Zombie* newZombie(std::string name);

class Zombie {
private:
	std::string name;
public:
	Zombie(const std::string &name);
	void announce();
	virtual ~Zombie();
};

#endif //ZOMBIE_H
