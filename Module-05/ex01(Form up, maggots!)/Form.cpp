//
// Created by Herminia Woodwright on 28/11/2021.
//

#include "Form.hpp"

Form::Form(const std::string &name, const int signGrade, const int executeGrade)
	: name(name), sign(false), signGrade(signGrade), executeGrade(executeGrade) {
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &form) : name(form.name), sign(form.sign),
	signGrade(form.signGrade), executeGrade(form.executeGrade) {}

Form &Form::operator=(const Form &form) {
	if (this != &form) {
		this->sign = form.sign;
	}
	return *this;
}

Form::~Form() {}

const std::string &Form::getName() const { return name; }
bool Form::isSign() const { return sign; }
int Form::getSignGrade() const { return signGrade; }
int Form::getExecuteGrade() const { return executeGrade; }

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->signGrade)
		throw GradeTooLowException();
	this->sign = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const _NOEXCEPT {
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream &out, const Form &form) {
	out << "{Form: " << form.getName()
		<< ", Signed: " << (form.isSign() ? "yes" : "no")
		<< ", Grade, required to sign: " << form.getSignGrade()
		<< ", Grade, required to execute: " << form.getExecuteGrade() << "}";
	return out;
}
