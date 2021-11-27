//
// Created by Herminia Woodwright on 11/27/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name) {
	if (grade < 1 || grade > 150)
		throw
		//throw exception: either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException
}

const std::string &Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::incrementGrade() {
	if (this->grade == 1)
		//throw
	this->grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->grade == 150)
		//throw
	this->grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}
