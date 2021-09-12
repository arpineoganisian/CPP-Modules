#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int frBits = 8;
public:
	Fixed();
//	Константный метод — это метод, который гарантирует, что не будет изменять
//	объект или вызывать неконстантные методы класса (поскольку они могут изменить объект).
	int getRawBits(void) const;
	void setRawBits(int const raw);
	virtual ~Fixed();

};

#endif //FIXED_HPP
