//
// Created by Herminia Woodwright on 12/4/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form(
		"ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(
		const ShrubberyCreationForm &shrubberyCreationForm) : Form(
				shrubberyCreationForm.getName(), 145, 137) {



}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(
		const ShrubberyCreationForm &shrubberyCreationForm) {
	if (this != &shrubberyCreationForm) {

	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!(this->isSign()))
		std::cout << this->getName() << " is not signed" << std::endl;
	else if (executor.getGrade() > this->getExecuteGrade())
		std::cout << executor << " can't execute " << this->getName() << std::endl;
	else {
		std::ofstream outf(this->getTarget() +".txt");
		if (!outf) {
			std::cerr << "File could not be opened for writing!" << std::endl;
			return;
		}
		outf << "--------------------------------" << std::endl;
		outf << "---######----------######-------" << std::endl;
		outf << "---######----------######-------" << std::endl;
		outf << "---######----------######-------" << std::endl;
		outf << "-----||--------------||---------" << std::endl;
		outf << "-----||--------------||---------" << std::endl;
		outf << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << std::endl;
	}
}