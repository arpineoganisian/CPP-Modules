//
// Created by Herminia Woodwright on 12/5/21.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

//• PresidentialPardonForm (Required grades: sign 25, exec 5).
//Action: Tells us <target> has been pardoned by Zafod Beeblebrox.
class PresidentialPardonForm : public Form {

public:
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &pardonForm);
    PresidentialPardonForm& operator=(const PresidentialPardonForm &pardonForm);
    virtual ~PresidentialPardonForm();

    void execute(const Bureaucrat &executor) const;
};


#endif //PRESIDENTIALPARDONFORM_HPP
