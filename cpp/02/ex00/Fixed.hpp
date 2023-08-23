#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
        int		getRawBits() const;
        void	setRawBits(int const raw);
};

#endif