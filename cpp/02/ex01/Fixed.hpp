#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed 
{
    private:
        int val;
        const static int	bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& obf);
        ~Fixed();
        Fixed& operator=(const Fixed& obf);
        Fixed(int num);
        Fixed(const float num);
        int		getRawBits() const;
        void	setRawBits(int const raw);
        float	toFloat() const;
        int		toInt() const;
};

std::ostream& operator <<(std::ostream &out, const Fixed &fixed);

#endif