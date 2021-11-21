#include "Character.hpp"

Character::Character(std::string name) : name(name) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &character) {
	*this = character;
}

Character &Character::operator=(const Character &character) {
	if (this != &character) {
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i])
				delete this->inventory[i];
			if (character.inventory[i])
				this->inventory[i] = character.inventory[i]->clone();
		}
		this->name = character.getName();
	}
	return *this;
}


Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}

const std::string &Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] == NULL) {
			this->inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}

AMateria *const *Character::getInventory() const {
	return inventory;
}

std::ostream& operator<< (std::ostream &out, const Character &character) {
	out << "Character's name:       " << character.getName() << std::endl
		<< "Character's inventory:";
	for (int i = 0; i < 4; i++) {
		if (character.getInventory()[i] != NULL)
			out << "\n" << i << " - " << character.getInventory()[i]->getType();
		else
			out << "\n" << i << " - ";
	}
	return out;
}