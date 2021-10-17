#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;

	std::cout << "THE WRONG ANIMAL PART:" << std::endl;
	const WrongAnimal *wrongAnimal = new WrongCat();
	std::cout << wrongAnimal->getType() << " " << std::endl;
	wrongAnimal->makeSound();
	delete wrongAnimal;
}
