#include "Dog.hpp"

Dog::Dog() 
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& obj) 
{
	this->type = obj.type;
	this->brain = new Brain();
	*(this->brain) = *(obj.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) 
{
	this->type = obj.type;
	*(this->brain) = *(obj.brain);
	std::cout << "Dog operator= called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	this->brain = NULL;
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "sound 'Bark' with dog" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}