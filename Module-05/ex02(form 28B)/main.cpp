#include <iostream>
#include <unistd.h>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	Bureaucrat bureaucrat1("Bob", 1);
	Bureaucrat bureaucrat150("Tom", 150);
    std::cout << std::endl;

	//ShrubberyCreationForm
	Form *formA = new ShrubberyCreationForm("home");
	formA->beSigned(bureaucrat1);
	formA->execute(bureaucrat1);
	try {
		formA->beSigned(bureaucrat150);
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	delete formA;
    std::cout << std::endl;

	//RobotomyRequestForm
	Form *formB = new RobotomyRequestForm("document flow");
	formB->beSigned(bureaucrat1);
	formB->execute(bureaucrat1);
    sleep(1);
	formB->execute(bureaucrat1);
    std::cout << std::endl;

	//PresidentialPardonForm
	Form *formC = new PresidentialPardonForm("Bureaucrat Tom");
    try {
        formC->execute(bureaucrat1);
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    formC->beSigned(bureaucrat1);
    formC->execute(bureaucrat1);

	return 0;
}
