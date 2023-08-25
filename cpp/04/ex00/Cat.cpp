#include "Cat.hpp"

Cat::Cat() 
{
	this->type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat& obj) 
{
	this->type = obj.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) 
{
	this->type = obj.type;
	std::cout << "Cat operator= called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "sound 'meow' with cat" << std::endl;
}