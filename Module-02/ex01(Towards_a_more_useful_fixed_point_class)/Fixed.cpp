#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = num << fractionalBits;
}

Fixed::Fixed(const float flNum) {
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = roundf(flNum * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator= (const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPoint = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "getRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

float Fixed::toFloat() const { return (float)()}

int Fixed::toInt() const { return fixedPoint >> fractionalBits}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//std::ostream& operator<< (std::ostream out, const Fixed &fixed) {
//	out << fixed. ;
//	return out;
//}
