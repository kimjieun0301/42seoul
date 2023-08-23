#include "Fixed.hpp"

Fixed::Fixed(void) 
{
	this->val = 0;
}

Fixed::Fixed(const Fixed& obj) 
{
	this->val = obj.getRawBits();
}

Fixed::~Fixed(void) 
{
}

Fixed& Fixed::operator=(const Fixed& obj) 
{
	if (this != &obj)
	{
		this->val = obj.getRawBits();
	}
	return (*this);
}

Fixed::Fixed(int num)
{
	this->val = num << this->bits;
}

Fixed::Fixed(const float num)
{
	this->val = roundf(num * (1 << this->bits));
}

int	Fixed::getRawBits(void) const
{
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->val / (1 << this->bits)); 
}

int	Fixed::toInt(void) const
{
	return (this->val >> this->bits);
}

std::ostream& operator <<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator>(Fixed const &ref) const
{
	return (this->getRawBits() > ref.getRawBits());
}

bool	Fixed::operator<(Fixed const &ref) const
{
	return (this->getRawBits() < ref.getRawBits());
}

bool	Fixed::operator>=(Fixed const &ref) const
{
	return (this->getRawBits() >= ref.getRawBits());
}

bool	Fixed::operator<=(Fixed const &ref) const
{
	return (this->getRawBits() <= ref.getRawBits());
}

bool	Fixed::operator==(Fixed const &ref) const
{
	return (this->getRawBits() == ref.getRawBits());
}

bool	Fixed::operator!=(Fixed const &ref) const
{
	return (this->getRawBits() != ref.getRawBits());
}


Fixed	Fixed::operator+(Fixed const &ref) const
{
	Fixed ret(this->toFloat() + ref.toFloat());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const &ref) const
{
	Fixed ret(this->toFloat() - ref.toFloat());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const &ref) const
{
	Fixed ret(this->toFloat() * ref.toFloat());
	return (ret);
}

Fixed	Fixed::operator/(Fixed const &ref) const
{
	Fixed ret(this->toFloat() / ref.toFloat());
	return (ret);
}

Fixed&	Fixed::operator++(void)
{
	this->val++;
	return (*this);
}

const Fixed	Fixed::operator++(int)
{
	const Fixed	ret(*this);

	this->val++;
	return (ret);
}

Fixed&	Fixed::operator--(void)
{
	this->val--;
	return (*this);
}

const Fixed	Fixed::operator--(int)
{
	const Fixed	ret(*this);

	this->val--;
	return (ret);
}

Fixed&	Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if (ref1 <= ref2)
		return ref1;
	else
		return ref2;
}

const Fixed&	Fixed::min(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1 <= ref2)
		return ref1;
	else
		return ref2;
}

Fixed&	Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if (ref1 >= ref2)
		return ref1;
	else
		return ref2;
}

const Fixed&	Fixed::max(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1 >= ref2)
		return ref1;
	else
		return ref2;
}