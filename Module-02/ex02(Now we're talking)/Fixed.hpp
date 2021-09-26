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
	Fixed(const float num);
	Fixed(const Fixed &fixed);

	Fixed& operator= (const Fixed &fixed);

	bool operator> (const Fixed &fixed);
	bool operator< (const Fixed &fixed);
	bool operator>= (const Fixed &fixed);
	bool operator<= (const Fixed &fixed);
	bool operator== (const Fixed &fixed);
	bool operator!= (const Fixed &fixed);

	Fixed operator+ (const Fixed &fixed);
	Fixed operator- (const Fixed &fixed);
	Fixed operator* (const Fixed &fixed);
	Fixed operator/ (const Fixed &fixed);

	Fixed& operator++ ();
	Fixed& operator-- ();

	Fixed operator++ (int);
	Fixed operator-- (int);

	//pre-increment, post-increment, pre-decrement and post-decrement operators

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	static Fixed& min(Fixed &fixed1, Fixed &fixed2);
	static const Fixed& min(const Fixed &fixed1, const Fixed &fixed2);
	static Fixed& max(Fixed &fixed1, Fixed &fixed2);
	static const Fixed& max(const Fixed &fixed1, const Fixed &fixed2);

    virtual ~Fixed();
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif //FIXED_HPP
