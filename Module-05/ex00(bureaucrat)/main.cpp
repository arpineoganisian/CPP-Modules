#include <iostream>
#include "Bureaucrat.hpp"

int main() {

	try {
//		Bureaucrat bureaucrat("Bob", -1);

		Bureaucrat bureaucrat1("Karl", 1);
//		bureaucrat1.incrementGrade();

		Bureaucrat bureaucrat2("Tom", 150);
//		bureaucrat1.decrementGrade();

//		Bureaucrat bureaucrat3("Michael", 50);
//		std::cout << bureaucrat3 << std::endl;
//		bureaucrat3.incrementGrade();
//		std::cout << bureaucrat3 << std::endl;
//		bureaucrat3.decrementGrade();
//		std::cout << bureaucrat3 << std::endl;

		std::cout << bureaucrat1 << std::endl;
		bureaucrat1 = bureaucrat2;
		std::cout << bureaucrat1 << std::endl;
		Bureaucrat bureaucrat(bureaucrat1);
		std::cout << bureaucrat << std::endl;


	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
