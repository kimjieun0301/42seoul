#include "Contact.hpp"

void	Contact::AddContact(void)
{
	std::cout << "first name ::" << std::endl;
	std::cin >> this->f_name;
	std::cout << "last name ::" << std::endl;
	std::cin >> this->l_name;
	std::cout << "nickname ::" << std::endl;
	std::cin >> this->n_name;
	std::cout << "phone number ::" << std::endl;
	std::cin >> this->p_number;
	std::cout << "darkest secret ::" << std::endl;
	std::cin >> this->d_secret;
	std::cout << "Save Complete" << std::endl;
}