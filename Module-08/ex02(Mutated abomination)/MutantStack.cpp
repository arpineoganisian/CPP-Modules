//
// Created by arpine on 19.01.2022.
//

#include "MutantStack.hpp"

template<typename T, typename C>
MutantStack<T, C>::MutantStack() {

}

template<typename T, typename C>
MutantStack<T, C>::MutantStack(const MutantStack &mutantStack) {

}

template<typename T, typename C>
MutantStack<T,C> &MutantStack<T, C>::operator=(const MutantStack &mutantStack) {
    return *this;
}

template<typename T, typename C>
MutantStack<T, C>::~MutantStack() {

}

template<typename T, typename C>
typename C::iterator MutantStack<T, C>::begin() {
    return NULL;
}

template<typename T, typename C>
typename C::iterator MutantStack<T, C>::end() {
    return NULL;
}
