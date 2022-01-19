//
// Created by arpine on 16.01.2022.
//

#ifndef EASYFIND_H
#define EASYFIND_H


template<typename T>
typename T::iterator easyfind(T &t, int x) {
    typename T::iterator b = t.begin();
    typename T::iterator e = t.end();

    typename T::iterator found = std::find(b, e, x);

    if (*found == 0 && *b == *e) {
        throw std::runtime_error("Element is not found");
    }

    return found;
}


#endif //EASYFIND_H
