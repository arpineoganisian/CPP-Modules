#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>
#include <string>
#include "AnsiColors.hpp"

class Brain {
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &brain);
	Brain operator=(const Brain &brain);
	virtual ~Brain();

	void setVeryFirstIdea(std::string idea);
	std::string getVeryFirstIdea();
};


#endif //BRAIN_HPP
