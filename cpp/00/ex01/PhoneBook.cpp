#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->idx = 0;
}

void	PhoneBook::Add()
{
	this->contacts[idx % 8].Add();
	this->idx++;
}

void	PhoneBook::Search()
{
	int i;
	int num;

	i = 0;
	if (this->idx == 0)
		std::cout << "PhoneBook Empty" << std::endl;
	else
	{
		std::cout << std::right << std::setw(10) << "index" << " | ";
		std::cout << std::right << std::setw(10) << "first name" << " | ";
		std::cout << std::right << std::setw(10) << "last name" << " | ";
		std::cout << std::right << std::setw(10) << "nickname" << std::endl;
		while (i < this->idx && i < 8)
		{
			std::cout << std::right << std::setw(10) << i + 1 << + " | ";
			this->contacts[i].PrintSearch();
			i++;
		}
		std::cout << "Enter index" << std::endl;
		std::cin >> num;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(255, '\n');
			std::cout << "Wrong input" << std::endl;
			return ;
		}
		num = num - 1;
		if (num <= 7 && num >= 0 && num < this->idx)
			contacts[num].PrintDetails();
		else
			std::cout << "Out of range" << std::endl;
	}
}