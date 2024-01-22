#include "Brain.hpp"

Brain::Brain() 
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "Brain Idea";
	std::cout << "Brain Constructor called" << std::endl;	
}

Brain::Brain(const Brain& obj) 
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = obj.getIdeas(i);
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& obj) 
{
	if (this != &obj)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = obj.getIdeas(i);
	}
	std::cout << "Brain operator= called" << std::endl;
	return (*this);
}

Brain::~Brain() 
{
	std::cout << "Brain Destructor called" << std::endl;

}

std::string Brain::getIdeas(int num) const
{
	return (this->ideas[num]);
}

void Brain::setIdeas(std::string idea, int num)
{
	if (num < 0 || num > 100)
		std::cout << "Brain idea 100_error" << std::endl;
	else
		this->ideas[num] = idea;
}