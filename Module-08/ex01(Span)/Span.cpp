//
// Created by arpine on 16.01.2022.
//

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : n(n) {}

Span::Span(const Span &span) {
    (void)span;
}

Span &Span::operator=(const Span &span) {
    (void)span;
    return *this;
}

Span::~Span() {}

void Span::addNumber(unsigned int elem) {
    if (this->v.size() == this->n)
        throw std::runtime_error("Error: Maximum amount of elements is already reached");
    this->v.push_back(elem);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (this->v.size() + (end - begin) > this->n)
        throw std::runtime_error("Error: Maximum amount of elements is already reached");
    this->v.insert(this->v.end(), begin, end);
}

int Span::shortestSpan() {
    if (v.empty() || v.size() == 1)
        throw std::runtime_error("There is no spin to find");

    std::vector<int> v2(this->v);
    std::sort(v2.begin(), v2.end());
    std::reverse(v2.begin(), v2.end());
    for (unsigned long i = 0; i < v.size()-1; i++) {
        v2[i] = v2[i] - v2[i+1];
    }
    v2.erase(v2.end() - 1);
    return *(std::min_element(v2.begin(), v2.end()));
}

int Span::longestSpan() {
    if (v.empty() || v.size() == 1)
        throw std::runtime_error("There is no spin to find");

    return *(std::max_element(this->v.begin(), this->v.end()))
            - *(std::min_element(this->v.begin(), this->v.end()));
}


