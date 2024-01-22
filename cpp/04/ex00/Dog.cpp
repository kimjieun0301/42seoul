#include "Dog.hpp"

Dog::Dog() 
{
	this->type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& obj) 
{
	this->type = obj.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) 
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "Dog operator= called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "sound 'Bark' with dog" << std::endl;
}