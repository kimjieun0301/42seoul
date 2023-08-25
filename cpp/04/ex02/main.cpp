#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *d = new Dog();
	Animal *c = new Cat();
	std::string str;
	Animal *meta[4];

	meta[0] = new Dog();
	meta[1] = new Dog();
	meta[2] = new Cat();
	meta[3] = new Cat();
	std::cout << std::endl;
	
	delete meta[0];
	delete meta[1];
	delete meta[2];
	delete meta[3];
	std::cout << std::endl;

	d->makeSound();
	c->makeSound();
    std::cout << std::endl;

	delete d;
	d = NULL;
	delete c;
	c = NULL;

	return 0;
}