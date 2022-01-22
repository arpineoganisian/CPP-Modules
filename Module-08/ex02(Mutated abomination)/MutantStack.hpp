//
// Created by arpine on 19.01.2022.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <stack>
#include <deque>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>{
private:
public:
    MutantStack();
    MutantStack(const MutantStack &mutantStack);
    MutantStack& operator=(const MutantStack &mutantStack);
    virtual ~MutantStack();

    typename C::iterator begin();
    typename C::iterator end();
}


#endif //MUTANTSTACK_HPP
