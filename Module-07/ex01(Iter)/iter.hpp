//
// Created by Herminia Woodwright on 12/26/21.
//

#ifndef EX01_ITER__ITER_HPP
#define EX01_ITER__ITER_HPP

template<typename T>
void iter(T *t, int size, void (*func)(T& t)) {
	for (int i = 0; i < size; i++) {
		func(t[i]);
	}
}


#endif //EX01_ITER__ITER_HPP
