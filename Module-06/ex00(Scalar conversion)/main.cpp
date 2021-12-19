#include <iostream>
#include <math.h>

void printChar(double value) {
	if (value >= 0 && value <= 127 && value == static_cast<int>(value)) {
		if (value < 32 || value > 126)
			std::cout << "Non displayable";
		else
			std::cout << "'" << static_cast<char>(value) << "'";
		return ;
	}
	std::cout << "impossible";
}

void printInt(double value) {
	if (value >= INT32_MIN && value <= INT32_MAX) {
		std::cout << static_cast<int>(value);
		return;
	}
	std::cout << "impossible";
}

void printFloat(double value) {
	std::cout << static_cast<float>(value);
	if (value == static_cast<int>(value)) {
		std::cout << ".0";
	}
	std::cout << "f";
}

void printDouble(double value) {
	std::cout << static_cast<float>(value);
	if (value == static_cast<int>(value)) {
		std::cout << ".0";
	}
}

int main(int argc, char *argv[]) {

	if (argc != 2) {
		std::cerr << "Wrong number of arguments!" << std::endl;
		return (0);
	}

	double d = strtod(argv[1], NULL);
	if (errno == ERANGE) {
		std::cerr << "Value is out of range!" << std::endl;
		return (0);
	}

	std::cout << "char: ";
	printChar(d);
	std::cout << std::endl << "int: ";
	printInt(d);
	std::cout << std::endl<< "float: ";
	printFloat(d);
	std::cout << std::endl<< "double: ";
	printDouble(d);
	std::cout << std::endl;

	return 0;
}