#include "Fixed.hpp"

Fixed::Fixed() {
	this->fixedPoint = 0;
}

Fixed::Fixed(const int num) {
	fixedPoint = num << fractionalBits;
}

Fixed::Fixed(const float num) {
	fixedPoint = roundf(num * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

Fixed &Fixed::operator= (const Fixed &fixed) {
	this->fixedPoint = fixed.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &fixed) {
	return this->fixedPoint > fixed.fixedPoint;
}

bool Fixed::operator<(const Fixed &fixed) {
	return this->fixedPoint > fixed.fixedPoint;
}

bool Fixed::operator>=(const Fixed &fixed) {
	return this->fixedPoint >= fixed.fixedPoint;
}

bool Fixed::operator<=(const Fixed &fixed) {
	return this->fixedPoint <= fixed.fixedPoint;
}

bool Fixed::operator==(const Fixed &fixed) {
	return this->fixedPoint == fixed.fixedPoint;
}

bool Fixed::operator!=(const Fixed &fixed) {
	return this->fixedPoint != fixed.fixedPoint;
}

Fixed Fixed::operator+(const Fixed &fixed) {
	Fixed newFixed;
	newFixed.setRawBits(this->fixedPoint + fixed.fixedPoint);
	return newFixed;
}

Fixed Fixed::operator-(const Fixed &fixed) {
	Fixed newFixed;
	newFixed.setRawBits(this->fixedPoint - fixed.fixedPoint);
	return newFixed;
}

Fixed Fixed::operator*(const Fixed &fixed) {
	Fixed newFixed;
	newFixed.setRawBits(this->fixedPoint * fixed.fixedPoint >> 8);
	return newFixed;
}

Fixed Fixed::operator/(const Fixed &fixed) {
	Fixed newFixed;
	newFixed.setRawBits(this->fixedPoint / fixed.fixedPoint >> 8);
	return newFixed;
}

Fixed &Fixed::operator++() {
	++this->fixedPoint;
	return *this;
}

Fixed &Fixed::operator--() {
	--this->fixedPoint;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

int Fixed::getRawBits() const {
	return this->fixedPoint;
}

void Fixed::setRawBits(const int raw) {
	this->fixedPoint = raw;
}

float Fixed::toFloat() const {
    return (float)fixedPoint / (float)(1 << fractionalBits);
}

int Fixed::toInt() const {
    return fixedPoint >> fractionalBits;
}

Fixed& Fixed::min(Fixed &fixed1, Fixed &fixed2)  {
	return fixed1 < fixed2 ? fixed1 : fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2) {
	return fixed1.fixedPoint < fixed2.fixedPoint ? fixed1 : fixed2;
}

Fixed& Fixed::max(Fixed &fixed1, Fixed &fixed2) {
	return fixed1 > fixed2 ? fixed1 : fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2) {
	return fixed1.fixedPoint > fixed2.fixedPoint ? fixed1 : fixed2;
}

Fixed::~Fixed() {
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}
