#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "AnsiColors.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &wrongCat);
	WrongCat operator=(const WrongCat &wrongCat);
	virtual ~WrongCat();
};


#endif //WRONGCAT_HPP
