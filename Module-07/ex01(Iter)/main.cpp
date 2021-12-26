#include <iostream>
#include "iter.hpp"

template<typename T>
void plusOne(T& t) {
	t++;
}

template<typename T>
void printArr(T *t, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << t[i] << " ";
	}
	std::cout << std::endl;
}

int main() {

	int size = 4;

	int intArr[] = {0, 1, 2, 3};
	printArr(intArr, size);
	::iter(intArr, size, &plusOne);
	printArr(intArr, size);

	double doubleArr[] = {0.5, 1.5, 2.5, 3.};
	printArr(doubleArr, size);
	::iter(doubleArr, size, &plusOne);
	printArr(doubleArr, size);

	char charArr[] = {65, 66, 67, 68};
	printArr(charArr, size);
	::iter(charArr, size, &plusOne);
	printArr(charArr, size);

	return 0;
}
