//
// Created by arpine on 16.01.2022.
//

#ifndef SPAN_HPP
#define SPAN_HPP


#include <vector>

class span {

private:
    unsigned int n;
    std::vector<int> v;
public:
    span();
    span(unsigned int n);
    span(const span &span);
    span& operator=(const span &span);
    virtual ~span();

    void addNumber(unsigned int elem);
    int shortestSpan();
    int longestSpan();
};
std::ostream& operator<< (std::ostream &out, const span &span);

#endif //SPAN_HPP
