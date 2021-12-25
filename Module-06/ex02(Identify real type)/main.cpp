#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
    switch (time(NULL) % 10) {
        case 0:
        case 1:
        case 2:
            std::cout << "A"<< std::endl;
            return new A();
        case 3:
        case 4:
        case 5:
            std::cout << "B"<< std::endl;
            return new B();
        default:
            std::cout << "C"<< std::endl;
            return new C();
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A"<< std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B"<< std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C"<< std::endl;
    }
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A"<< std::endl;
    } catch (std::bad_cast &e) {
        try {
            (void)dynamic_cast<B&>(p);
            std::cout << "B"<< std::endl;
        } catch (std::bad_cast &e) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << "C"<< std::endl;
            } catch (std::bad_cast &e){
            }
        }
    }
}

int main() {
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;

    return 0;
}
