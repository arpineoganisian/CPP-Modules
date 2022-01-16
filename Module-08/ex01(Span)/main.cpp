#include <iostream>
#include "span.hpp"

int main() {
    span span(3);
    span.addNumber(-10);
    span.addNumber(-5);
    span.addNumber(100);

    std::cout << span.longestSpan() << std::endl;
    std::cout << span.shortestSpan() << std::endl;

    return 0;
}
