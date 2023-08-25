#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
    this->name = "default";
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	
	std::cout << "ScavTrap " << this->name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& st)
{
	this->name = st.name;
	this->HitPoint = st.HitPoint;
	this->EnergyPoint = st.EnergyPoint;
	this->AttackDamage = st.AttackDamage;
	std::cout << "ScavTrap " << this->name << " copy constructor called" << std::endl;

}

ScavTrap& ScavTrap::operator=(const ScavTrap& st) 
{
	this->name = st.name;
	this->HitPoint = st.HitPoint;
	this->EnergyPoint = st.EnergyPoint;
	this->AttackDamage = st.AttackDamage;
	std::cout << "ScavTrap operator= " << this->name << " called" << std::endl;
	return (*this);

}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->HitPoint || !this->EnergyPoint)
	{
		std::cout << "ScavTrap " << this->name << " no move" << std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap " << this->name << " attacks " << target 
					<< ", causing " << this->AttackDamage << " points of damage!"
					<< std::endl;
		this->EnergyPoint--;
	}
}