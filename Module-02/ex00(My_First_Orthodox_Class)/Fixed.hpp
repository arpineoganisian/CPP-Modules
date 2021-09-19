#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int rawBits;
	static const int numberOfBits = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed& operator= (const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	virtual ~Fixed();
};

#endif //FIXED_HPP
