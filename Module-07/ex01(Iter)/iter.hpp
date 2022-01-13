//
// Created by Herminia Woodwright on 12/26/21.
//

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T *t, int size, void (*func)(T const & t)) {
	for (int i = 0; i < size; i++) {
		func(t[i]);
	}
}


#endif //ITER_HPP
