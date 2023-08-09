#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
    private:
        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string p_number;
        std::string d_secret;
	    std::string	getShortStr(std::string str);
	public:
		void	AddContact(void);
		void	PrintShortContact(void);
		void	PrintAllContact(void);
};

#endif