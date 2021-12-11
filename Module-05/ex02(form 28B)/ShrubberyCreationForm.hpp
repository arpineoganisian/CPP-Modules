//
// Created by Herminia Woodwright on 12/4/21.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &shrubberyCreationForm);
	virtual ~ShrubberyCreationForm();

	void execute(const Bureaucrat &executor) const;
};

#endif //SHRUBBERYCREATIONFORM_HPP
