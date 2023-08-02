#include "Phonebook.hpp"

int main()
{
	std::string	cmd;
	while(true)
	{
		std::cout << "Enter one of three commands(ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
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