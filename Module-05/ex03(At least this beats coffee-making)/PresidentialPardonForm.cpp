//
// Created by Herminia Woodwright on 12/5/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(
        "presidential pardon", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pardonForm) : Form(
        "presidential pardon", 25, 5, pardonForm.getTarget()){
    *this = pardonForm;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &pardonForm) {
    if (this != &pardonForm) {
        this->target = pardonForm.target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (!(this->isSign()))
        throw FormNotSignedException();
    if (executor.getGrade() > this->getExecuteGrade()) {
        throw GradeTooLowException();
    }
    std::cout << "<" << this->target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}


