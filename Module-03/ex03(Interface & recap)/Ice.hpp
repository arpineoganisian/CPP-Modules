#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
public:
	Ice();
	Ice(const Ice &ice);
	Ice& operator=(const Ice &Ice);
	virtual ~Ice();

	virtual Ice *clone() const override;
	void use(ICharacter &target) override;
};


#endif //ICE_HPP
