#include <iostream>
#include "iter.hpp"

template<typename T>
void printElem(T const & t) {
	std::cout << t << std::endl;
}

int main() {

	int size = 4;

	int intArr[] = {0, 1, 2, 3};
	::iter(intArr, size, printElem);

	double doubleArr[] = {0.5, 1.5, 2.5, 3.5};
	::iter(doubleArr, size, printElem);

	char charArr[] = {65, 66, 67, 68};
	::iter(charArr, size, printElem);

	return 0;
}
