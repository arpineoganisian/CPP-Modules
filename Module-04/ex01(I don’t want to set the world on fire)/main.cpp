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


	std::cout << "THE DEEP COPIES PART" << std::endl;
	Dog dog1;
	dog1.getBrain()->setVeryFirstIdea("I'm hungry!");
	Dog dog2(dog1);



	return 0;
}
