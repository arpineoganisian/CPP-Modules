//
// Created by Herminia Woodwright on 12/26/21.
//

#ifndef EX00_A_FEW_FUNCTIONS__WHATEVER_HPP
#define EX00_A_FEW_FUNCTIONS__WHATEVER_HPP


template <typename T>
void swap(T& t1, T& t2) {
	T temp;

	temp = t1;
	t1 = t2;
	t2 = temp;
}

template <typename T>
T max(T t1, T t2) {
	return t1 > t2 ? t1 : t2;
}

template <typename T>
T min(T t1, T t2) {
	return t1 < t2 ? t1 : t2;
}


#endif //EX00_A_FEW_FUNCTIONS__WHATEVER_HPP
