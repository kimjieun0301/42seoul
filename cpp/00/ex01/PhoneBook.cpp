#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->idx = 0;
}

void	PhoneBook::Add(void)
{
	this->contacts[idx % 8].Add();
}