//
// Created by arpine on 12.12.2021.
//

#ifndef EX03_AT_LEAST_THIS_BEATS_COFFEE_MAKING__INTERN_HPP
#define EX03_AT_LEAST_THIS_BEATS_COFFEE_MAKING__INTERN_HPP

#include "Form.hpp"

class Intern {
public:
    Intern();
    Intern(const Intern& intern);
    Intern& operator=(const Intern& intern);
    virtual ~Intern();

    Form* makeForm(std::string formName, std::string formTarget);
};


#endif //EX03_AT_LEAST_THIS_BEATS_COFFEE_MAKING__INTERN_HPP
