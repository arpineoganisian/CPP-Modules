//
// Created by Herminia Woodwright on 12/5/21.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &robotomyRequestForm);
	virtual ~RobotomyRequestForm();

	void execute(const Bureaucrat &executor) const;
};


#endif //ROBOTOMYREQUESTFORM_HPP
