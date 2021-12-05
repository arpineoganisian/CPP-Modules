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
	std::string target;
public:
	Form(const std::string &name, const int signGrade, const int executeGrade,
		 std::string target = "");
	Form(const Form &form);
	Form& operator=(const Form &form);
	virtual ~Form();

	const std::string &getName() const;
	bool isSign() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	const std::string &getTarget() const;

	void beSigned(Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;

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
