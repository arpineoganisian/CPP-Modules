#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int fixedPoint;
	static const int fractionalBits = 8;
public:
	//default constructor
	Fixed();

	//copy constructor
	Fixed(const Fixed &fixed);


	//Константный метод — это метод, который гарантирует, что не будет изменять
	//объект или вызывать неконстантные методы класса (поскольку они могут изменить объект).
	int getRawBits(void) const;
	void setRawBits(int const raw);

	//destructor
	virtual ~Fixed();

};

#endif //FIXED_HPP
