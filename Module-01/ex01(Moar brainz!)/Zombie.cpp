#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(const std::string &name) : name(name) {}

void Zombie::announce() {
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->name << " is dead" << std::endl;
}

void Zombie::setName(const std::string &name) {
	Zombie::name = name;
}

