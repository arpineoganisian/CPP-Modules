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

void Brain::setVeryFirstIdea(std::string idea) {
	this->ideas[0] = idea;
}

std::string Brain::getVeryFirstIdea() {
	return this->ideas[0];
}
