#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

//	Animal animal = new Animal();

	int n = 4;
	Animal *animals[n];
	for (int i = 0; i < n/2; i++) {
		animals[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = n/2; i < n; i++) {
		animals[i] = new Cat();
	}
	std::cout << std::endl;

	animals[0]->makeSound();
	animals[3]->makeSound();
	std::cout << std::endl;


	for (int i = 0; i < n; i++) {
		delete animals[i];
	}
	std::cout << std::endl;

	std::cout << "1) DOG" << std::endl;
	Dog *dog1 = new Dog();
	dog1->getBrain()->setIdea(0,"I'm hungry!");
	Dog *dog2 = new Dog(*dog1);
	std::cout << dog2->getBrain()->getIdea(0) << std::endl;
	delete dog1;
	delete dog2;
	std::cout << std::endl;

	std::cout << "1) CAT" << std::endl;
	Cat *cat1 = new Cat();
	cat1->getBrain()->setIdea(50,"I'm hungry too!");
	Cat *cat2 = new Cat(*cat1);
	std::cout << cat2->getBrain()->getIdea(50) << std::endl;
	delete cat1;
	delete cat2;

	return 0;
}
