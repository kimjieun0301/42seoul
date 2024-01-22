#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) 
{
	this->type = obj.type;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) 
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "WrongAnimal operator= called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "No sound with wronganimal" << std::endl;
}
std::string WrongAnimal::getType() const
{
	return (type);
}