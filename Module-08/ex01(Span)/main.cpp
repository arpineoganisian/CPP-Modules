#include <iostream>
#include "Span.hpp"

int main() {
    Span span(5);

    try {
        std::cout << span.longestSpan() << std::endl;
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }

    span.addNumber(5);

    try {
        std::cout << span.shortestSpan() << std::endl;
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }

    span.addNumber(3);
    span.addNumber(17);
    span.addNumber(9);
    span.addNumber(11);

    std::cout << span.shortestSpan() << std::endl;
    std::cout << span.longestSpan() << std::endl;

    std::vector<int> vector;
    for (int i = 0; i < 10001; i++) {
        vector.push_back(i);
    }
    Span bigSpan = Span(10001);
    bigSpan.addNumber(vector.begin(), vector.end());

    std::cout << bigSpan.shortestSpan() << std::endl;
    std::cout << bigSpan.longestSpan() << std::endl;

    return 0;
}
