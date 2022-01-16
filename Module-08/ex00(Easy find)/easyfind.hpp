//
// Created by arpine on 16.01.2022.
//

#ifndef EASYFIND_H
#define EASYFIND_H


template<typename T>
typename T::iterator easyfind(T &t, int x) {
    typename T::iterator it = t.begin();
    while (it != t.end()) {
        if (*it == x)
            return it;
        it++;
    }
    throw std::runtime_error("Element is not found");
}


#endif //EASYFIND_H
