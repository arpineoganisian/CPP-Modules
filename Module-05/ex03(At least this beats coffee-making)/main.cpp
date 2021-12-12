#include <iostream>
#include "Intern.hpp"

int main() {

    Intern  someRandomIntern;
    Form*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    std::cout << "Name: " << rrf->getName() << std::endl;
    std::cout << "Target: " << rrf->getTarget() << std::endl;
    std::cout << "Sign Grade: " << rrf->getSignGrade() << std::endl;
    std::cout << "Execution Grade: " << rrf->getExecuteGrade() << std::endl;
    std::cout << std::endl;

    someRandomIntern.makeForm("111", "222");
    delete rrf;
}
