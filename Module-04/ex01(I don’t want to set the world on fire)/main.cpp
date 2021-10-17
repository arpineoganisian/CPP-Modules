#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

	int n = 10;
	Animal *animals[n];
	for (int i = 0; i < n/2; i++) {
		animals[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = n/2; i < n; i++) {
		animals[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < n; i++) {
		delete animals[i];
	}
	std::cout << std::endl;


	std::cout << "THE DEEP COPIES PART:" << std::endl;
	std::cout << "1) DOG" << std::endl;
	Dog *dog1 = new Dog();
	dog1->getBrain()->setIdea(0,"I'm hungry!");
	Dog *dog2 = new Dog(*dog1);
	delete dog1;
	std::cout << dog2->getBrain()->getIdea(0) << std::endl;
	delete dog2;
	std::cout << std::endl;

	std::cout << "1) CAT" << std::endl;
	Cat *cat1 = new Cat();
	cat1->getBrain()->setIdea(50,"I'm hungry too!");
	Cat *cat2;
	cat2 = cat1;
	delete cat1;
	std::cout << cat2->getBrain()->getIdea(50) << std::endl;

	return 0;
}
