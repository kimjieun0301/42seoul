#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
	this->name = "default";
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
	
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
	
	std::cout << "FragTrap " << this->name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ft)
{
	this->name = ft.name;
	this->HitPoint = ft.HitPoint;
	this->EnergyPoint = ft.EnergyPoint;
	this->AttackDamage = ft.AttackDamage;
	std::cout << "FragTrap " << this->name << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& ft) 
{
	this->name = ft.name;
	this->HitPoint = ft.HitPoint;
	this->EnergyPoint = ft.EnergyPoint;
	this->AttackDamage = ft.AttackDamage;
	std::cout << "FragTrap operator= " << this->name << " called" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " high five" << std::endl;
}