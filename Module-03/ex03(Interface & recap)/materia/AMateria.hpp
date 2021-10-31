#ifndef AMATERIA_HPP
#define AMATERIA_HPP


#include <string>
#include "../character/ICharacter.hpp"

class AMateria {
protected:
//	[...]
public:
	AMateria(std::string const & type);
	AMateria(const AMateria &aMateria);
	AMateria& operator=(const AMateria &aMateria);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif AMATERIA_HPP
