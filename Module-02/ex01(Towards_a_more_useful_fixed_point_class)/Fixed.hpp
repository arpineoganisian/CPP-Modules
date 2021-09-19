#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int fixedPoint;
	static const int fractionalBits = 8;
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float flNum);
	Fixed(const Fixed &fixed);
	Fixed& operator= (const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	virtual ~Fixed();
};

std::ostream& operator<< (std::ostream out, const Fixed &fixed);

#endif //FIXED_HPP
