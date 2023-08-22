#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{
	this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB() 
{
}

void	HumanB::attack() const
{
	if (weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << name << " attacks " << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}