#include "Contact.hpp"

void	Contact::Add()
{
	if (!std::cin.eof())
	{
		std::cout << "first name ::" << std::endl;
		std::cin >> this->f_name;
	}
	if (!std::cin.eof())
	{
		std::cout << "last name ::" << std::endl;
		std::cin >> this->l_name;
	}	
	if (!std::cin.eof())
	{
		std::cout << "nickname ::" << std::endl;
		std::cin >> this->n_name;
	}	
	if (!std::cin.eof())
	{
		std::cout << "phone number ::" << std::endl;
		std::cin >> this->p_number;
	}
	if (!std::cin.eof())
	{
		std::cout << "darkest secret ::" << std::endl;
		std::cin >> this->d_secret;
	}
	if (!std::cin.eof())
		std::cout << "Save Complete" << std::endl;
}

void	Contact::PrintSet(std::string str)
{
	if(str.length() > 10)
		std::cout << std::right << std::setw(9) << str.substr(0, 9) << + ".";
	else
		std::cout << std::right << std::setw(10) << str;
}

void	Contact::PrintSearch()
{
	PrintSet(f_name);
	std::cout << " | ";
	PrintSet(l_name);
	std::cout << " | ";
	PrintSet(n_name);
	std::cout << std :: endl;
}
void Contact::PrintDetails()
{
	std::cout << "first name : " << this->f_name << std::endl;
	std::cout << "last name : " << this->l_name << std::endl;
	std::cout << "nickname : " << this->n_name << std::endl;
	std::cout << "phone number : " << this->p_number << std::endl;
	std::cout << "darkest secret : " << this->d_secret << std::endl;
}