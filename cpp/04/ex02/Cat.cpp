#include "Cat.hpp"

Cat::Cat() 
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat& obj) 
{
	this->type = obj.type;
	if (this->brain != NULL) 
	{
		delete this->brain;
		this->brain = NULL;
	}
	this->brain = new Brain();
	*(this->brain) = *(obj.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) 
{
	if (this != &obj)
	{
		this->type = obj.type;
		if (this->brain != NULL) 
		{
			delete this->brain;
			this->brain = NULL;
		}
		this->brain = new Brain();
		*(this->brain) = *(obj.brain);
	}
	std::cout << "Cat operator= called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	this->brain = NULL;
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "sound 'meow' with cat" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}