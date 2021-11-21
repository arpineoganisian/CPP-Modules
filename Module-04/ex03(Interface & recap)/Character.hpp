#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{

private:
	std::string name;
	AMateria *inventory[4];

public:
	Character(std::string name = "name");
	Character(const Character &character);
	Character& operator=(const Character &character);
	virtual ~Character();

	AMateria *const *getInventory() const;

	const std::string &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

std::ostream& operator<< (std::ostream &out, const Character &character);

#endif //CHARACTER_HPP
