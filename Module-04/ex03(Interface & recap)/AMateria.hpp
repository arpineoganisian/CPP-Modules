#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria {
protected:
//	[...]
public:
	AMateria(std::string const &type = "aMateria");
	AMateria(const AMateria &aMateria);
	AMateria& operator=(const AMateria &aMateria);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif //AMATERIA_HPP
