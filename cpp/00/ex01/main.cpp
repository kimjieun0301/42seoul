#include "PhoneBook.hpp"

int main()
{
	std::string	cmd;
	PhoneBook PhoneBook;

	while(true)
	{
		if (!std::cin.eof())
		{
			std::cout << "Enter one of three commands(ADD, SEARCH, EXIT)" << std::endl;
			std::cin >> cmd;
		}
		if (std::cin.eof())
		{
			exit(0);
		}
		else if (cmd == "ADD")
		{
			PhoneBook.Add();
		}
		else if(cmd == "SEARCH")
		{
			PhoneBook.Search();
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