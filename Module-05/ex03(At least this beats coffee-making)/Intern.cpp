//
// Created by arpine on 12.12.2021.
//

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(const Intern &intern) { *this = intern; }
Intern &Intern::operator=(const Intern &intern) {
    if (this != &intern) {}
    return *this;
}


Form *Intern::makeForm(std::string formName, std::string formTarget) {
    Form *required;
    Form *forms[3] = {new PresidentialPardonForm(formTarget),
                      new RobotomyRequestForm(formTarget),
                      new ShrubberyCreationForm(formTarget)};

    for (int i = 0; i < 3; i++) {
        if (forms[i]->getName().compare(formName) == 0) {
            required = forms[i];
            std::cout << "Intern creates <" << forms[i]->getName() << ">" << std::endl;
            for (int i = 0; i < 3; i++) {
                delete forms[i];
            }
            return required;
        }
    }
    std::cout << "No such form exists: " << formName << std::endl;
    return NULL;
}
