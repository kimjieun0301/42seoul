#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
 private:
	int					val;
	const static int	bits = 8;
 public:
	Fixed(void);
	Fixed(const Fixed& obf);
	~Fixed(void);
	Fixed& operator=(const Fixed& obf);
	Fixed(int num);
	Fixed(const float num);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(Fixed const &ref) const;
	bool	operator<(Fixed const &ref) const;
	bool	operator>=(Fixed const &ref) const;
	bool	operator<=(Fixed const &ref) const;
	bool	operator==(Fixed const &ref) const;
	bool	operator!=(Fixed const &ref) const;
	
	Fixed	operator+(Fixed const &ref) const;
	Fixed	operator-(Fixed const &ref) const;
	Fixed	operator*(Fixed const &ref) const;
	Fixed	operator/(Fixed const &ref) const;

	Fixed	&operator++(void);
	const Fixed	operator++(int);
	Fixed	&operator--(void);
	const Fixed	operator--(int);

	static Fixed	&min(Fixed &ref1, Fixed &ref2);
	static const Fixed	&min(Fixed const &ref1, Fixed const &ref2);
	
	static Fixed	&max(Fixed &ref1, Fixed &ref2);
	static const Fixed	&max(Fixed const &ref1, Fixed const &ref2);
	
};

std::ostream& operator <<(std::ostream &out, const Fixed &fixed);

#endif