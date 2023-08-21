#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
//# include <string>

class	Contact
{
    private:
        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string p_number;
        std::string d_secret;
	    void	PrintSet(std::string str);
	public:
		void	Add();
		void	PrintSearch();
        void	PrintDetails();
};

#endif