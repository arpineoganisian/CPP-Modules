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
    MutantStack() {};
    MutantStack(const MutantStack &mutantStack) { *this = mutantStack; };
    MutantStack& operator=(const MutantStack &mutantStack) {
		this->c = mutantStack.c;
		return *this;
	};
    virtual ~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(){ return this->c.begin(); };
	iterator end() { return this->c.end(); };
};

#endif //MUTANTSTACK_HPP
