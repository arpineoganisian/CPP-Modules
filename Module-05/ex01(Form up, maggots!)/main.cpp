#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"


int main() {
	Form formA("formA", 100, 100);
	Form formB("formB", 10, 10);

	Bureaucrat bureaucrat("Alice", 80);
	bureaucrat.signForm(formA);
	bureaucrat.signForm(formB);

	return 0;
}
