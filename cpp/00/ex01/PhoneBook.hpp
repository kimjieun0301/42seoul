#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		idx;
	public:
		PhoneBook();
		void	AddContact();
		void	PrintContact();		
};
#endif