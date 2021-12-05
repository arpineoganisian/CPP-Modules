#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

	Form *formA = new ShrubberyCreationForm("home");
	Bureaucrat bureaucrat1("Bob", 1);
	Bureaucrat bureaucrat150("Tom", 150);

	formA->beSigned(bureaucrat1);
	formA->execute(bureaucrat1);

	formA->execute(bureaucrat1);
	formA->execute(bureaucrat1);

	delete formA;
	return 0;


}
