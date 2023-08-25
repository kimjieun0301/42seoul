#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	this->name = "default";
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
	
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
{
	this->name = name;
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
	
	std::cout << "ClapTrap " << this->name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct) 
{
	this->name = ct.name;
	this->HitPoint = ct.HitPoint;
	this->EnergyPoint = ct.EnergyPoint;
	this->AttackDamage = ct.AttackDamage;

	std::cout << "ClapTrap " << this->name << " copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ct) 
{
	this->name = ct.name;
	this->HitPoint = ct.HitPoint;
	this->EnergyPoint = ct.EnergyPoint;
	this->AttackDamage = ct.AttackDamage;

	std::cout << "ClapTrap operator= " << this->name << " called" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (!this->HitPoint || !this->EnergyPoint)
	{
		std::cout << "ClapTrap " << this->name << " no move" << std::endl;
	}
	else
	{
		std::cout	<< "ClapTrap " << this->name << " attacks " << target 
		<< ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->HitPoint)
		this->HitPoint = 0;
	else
		this->HitPoint = this->HitPoint - amount;
	std::cout	<< "ClapTrap " << this->name << " take damage : " << amount << std::endl;
	if (!this->HitPoint)
	{
		std::cout	<< "ClapTrap " << this->name << " die" << std::endl; 
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->HitPoint || !this->EnergyPoint)
	{
		std::cout << "ClapTrap " << this->name << " no move" << std::endl;
	}
	else
	{
		this->HitPoint += amount;
		this->EnergyPoint--;
		std::cout	<< "ClapTrap " << this->name << " repair Hit point : " 
		<< amount << " and then Hit point : " << this->HitPoint << std::endl;
	}
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

unsigned int ClapTrap::getHitPoint() const
{
	return (this->HitPoint);
}

unsigned int	ClapTrap::getEnergyPoint() const
{
	return (this->EnergyPoint);
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return (this->AttackDamage);
}