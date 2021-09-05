//
// Created by Herminia Woodwright on 9/5/21.
//

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
	void setName(const std::string &name);
	virtual ~Zombie();
};

#endif //ZOMBIE_H
