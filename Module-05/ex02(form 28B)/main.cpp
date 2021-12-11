#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	Bureaucrat bureaucrat1("Bob", 1);
	Bureaucrat bureaucrat150("Tom", 150);

	//sign 145, exec 137
	Form *formA = new ShrubberyCreationForm("home");
	formA->beSigned(bureaucrat1);
	formA->execute(bureaucrat1);
	try {
		formA->beSigned(bureaucrat150);
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	delete formA;

	//sign 72, exec 45
	Form *formB = new RobotomyRequestForm("document flow");

	formB->beSigned(bureaucrat1);
	formB->execute(bureaucrat1);
	formB->execute(bureaucrat1);
	formB->execute(bureaucrat1);
	formB->execute(bureaucrat1);
//
//
//	//sign 25, exec 5
//	Form *formC = new PresidentialPardonForm("home");




	return 0;


}
