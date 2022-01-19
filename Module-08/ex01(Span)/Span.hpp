//
// Created by arpine on 16.01.2022.
//

#ifndef SPAN_HPP
#define SPAN_HPP


#include <vector>

class Span {

private:
    unsigned int n;
    std::vector<int> v;
public:
    Span();
    Span(unsigned int n);
    Span(const Span &span);
    Span& operator=(const Span &span);
    virtual ~Span();

    void addNumber(unsigned int elem);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();
};
std::ostream& operator<< (std::ostream &out, const Span &span);

#endif //SPAN_HPP
