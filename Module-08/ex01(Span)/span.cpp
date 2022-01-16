//
// Created by arpine on 16.01.2022.
//

#include "span.hpp"

span::span() {}

span::span(unsigned int n) : n(n) {}

span::span(const span &span) {
    (void)span;
}

span &span::operator=(const span &span) {
    (void)span;
    return *this;
}

span::~span() {}

void span::addNumber(unsigned int elem) {
    if (this->v.size() == this->n)
        throw std::runtime_error("Error: Maximum amount of elements is already reached");
    this->v.push_back(elem);
}

void checkVector(const std::vector<int> &v) {
    if (v.empty() || v.size() == 1)
        throw std::runtime_error("There is no spin to find");
}

int span::shortestSpan() {
    std::vector<int> v2(this->v);
    std::reverse(v2.begin(), v2.end());
    for (unsigned long i = 0; i < v.size()-1; i++) {
        v2[i] = v2[i] - v2[i+1];
    }
    v2.erase(v2.end() - 1);
    return *(std::min_element(v2.begin(), v2.end()));
}

int span::longestSpan() {
    return *(std::max_element(this->v.begin(), this->v.end()))
            - *(std::min_element(this->v.begin(), this->v.end()));
}


