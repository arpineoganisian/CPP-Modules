#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
private:
	std::string name;
public:
	const std::string &getName() const override;
	void equip(AMateria *m) override;
	void unequip(int idx) override;
	void use(int idx, ICharacter &target) override;
};

#endif //CHARACTER_HPP
