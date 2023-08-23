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

Fixed& Fixed::operator=(const Fixed& obf) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obf)
	{
		this->val = obf.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->val = num << this->bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->val = roundf(num * (1 << this->bits));
}

int	Fixed::getRawBits() const
{
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->val / (1 << this->bits)); 
}

int	Fixed::toInt() const
{
	return (this->val >> this->bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}