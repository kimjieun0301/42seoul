#include "Fixed.hpp"

Fixed::Fixed() 
{
	std::cout << "Default constructor called" << std::endl;
	this->val = 0;
}

Fixed::Fixed(const Fixed& obf) 
{
	std::cout << "Copy constructor called" << std::endl;
	this->val = obf.getRawBits();
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obf) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obf)
	{
		this->val = obf.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}