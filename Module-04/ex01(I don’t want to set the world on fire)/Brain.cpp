#include "Brain.hpp"

Brain::Brain() {
	std::cout << MAGENTA << "Brain constructor " << RESETCOLOR << std::endl;
}

Brain::Brain(const Brain &brain) {
	std::cout << MAGENTA << "Brain copy constructor" << RESETCOLOR << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = brain.ideas[i];
	}
}

Brain Brain::operator=(const Brain &brain) {
	std::cout << MAGENTA << "Brain assignation operator" << RESETCOLOR << std::endl;
	if (this != &brain) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = brain.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << MAGENTA << "Brain destructor" << RESETCOLOR << std::endl;
}

void Brain::setIdea(int i, std::string idea) {
	this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) {
	return this->ideas[i];
}
