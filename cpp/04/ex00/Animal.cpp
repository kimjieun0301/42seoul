#include "Animal.hpp"

Animal::Animal() 
{
	this->type = "Animal";
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& obj) 
{
	this->type = obj.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj) 
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "Animal operator= called" << std::endl;
	return (*this);
}

Animal::~Animal() 
{
	std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "No sound with animal" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}