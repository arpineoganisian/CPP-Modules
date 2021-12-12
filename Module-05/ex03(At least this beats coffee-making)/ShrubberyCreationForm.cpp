//
// Created by Herminia Woodwright on 12/4/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form(
		"shrubbery creation", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(
		const ShrubberyCreationForm &shrubberyCreationForm) : Form(
        "shrubbery creation", 145, 137, shrubberyCreationForm.getTarget()) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(
		const ShrubberyCreationForm &shrubberyCreationForm) {
	if (this != &shrubberyCreationForm) {
		this->target = shrubberyCreationForm.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!(this->isSign()))
		throw FormNotSignedException();
	if (executor.getGrade() > this->getExecuteGrade()) {
		throw GradeTooLowException();
	}
	std::ofstream outf(this->getTarget() +".txt");
	if (!outf) {
		std::cerr << "File could not be opened for writing!" << std::endl;
		return;
	}
	outf << "     ccee88oo" << std::endl;
	outf << "  C8O8O8Q8PoOb o8oo" << std::endl;
	outf << " dOB69QO8PdUOpugoO9bD" << std::endl;
	outf << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	outf << "    6OuU  /p u gcoUodpP" << std::endl;
	outf << "      \\\\\\//  /douUP" << std::endl;
	outf << "        \\\\\\////" << std::endl;
	outf << "         |||/\\" << std::endl;
	outf << "         |||\\/" << std::endl;
	outf << "         |||||" << std::endl;
	outf << "   .....//||||\\...." << std::endl;
}