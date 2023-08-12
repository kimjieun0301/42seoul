#include "PhoneBook.hpp"

int main()
{
	std::string	cmd;
	PhoneBook PhoneBook;

	while(true)
	{
		std::cout << "Enter one of three commands(ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			PhoneBook.Add();
		}
		else if(cmd == "SEARCH")
		{
		}
		else if(cmd == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "You can enter only three commands : ADD, SEARCH, EXIT" << std::endl;
		}

	}
	return 0;
}