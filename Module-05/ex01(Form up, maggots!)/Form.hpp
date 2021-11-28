//
// Created by Herminia Woodwright on 28/11/2021.
//

#ifndef FORM_HPP
#define FORM_HPP


#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {

private:
	const std::string name;
	bool sign;
	const int signGrade;
	const int executeGrade;
public:
	Form(const std::string &name, const int signGrade, const int executeGrade);
	Form(const Form &form);
	Form& operator=(const Form &form);
	virtual ~Form();

	const std::string &getName() const;
	bool isSign() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

	void beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const _NOEXCEPT;
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const _NOEXCEPT;
	};
};

std::ostream& operator<<(std::ostream &out, const Form &form);

#endif //FORM_HPP
