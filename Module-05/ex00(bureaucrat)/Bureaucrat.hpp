//
// Created by Herminia Woodwright on 11/27/21.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <string>
#include <iostream>

class Bureaucrat {
private:
	std::string name;
	int grade; //from 1 (highest possible) to 150 (lowest possible)
public:
	Bureaucrat(const std::string &name, int grade);
	const std::string &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	class GradeTooHighException;
	class GradeTooLowException;
	//Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif //BUREAUCRAT_HPP
