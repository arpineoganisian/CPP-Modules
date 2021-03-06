//
// Created by Herminia Woodwright on 12/5/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form(
		"RobotomyRequestForm", 72, 45, target) {
}

RobotomyRequestForm::RobotomyRequestForm(
		const RobotomyRequestForm &robotomyRequestForm) : Form(
				"RobotomyRequestForm", 72, 45, robotomyRequestForm.getTarget()) {
}

RobotomyRequestForm &RobotomyRequestForm::operator=(
		const RobotomyRequestForm &robotomyRequestForm) {
	if (this != &robotomyRequestForm) {
		this->target = robotomyRequestForm.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!(this->isSign()))
		throw FormNotSignedException();
	if (executor.getGrade() > this->getExecuteGrade()) {
		throw GradeTooLowException();
	}
	if (time(0) % 2) {
		std::cout << "Beep boop! <" << this->target << "> has been robotomized successfully" << std::endl;
	} else {
		std::cout << "Beep boop! " << "Failed to robotomized <" << this->target << ">" << std::endl;
	}
}
