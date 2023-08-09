#include "PhoneBook.hpp"

void	PhoneBook::AddContact(void)
{
	this->contacts[idx % 8].AddContact();
	this->idx++;
}