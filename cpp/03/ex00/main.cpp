#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Clap1("Clap1");
	ClapTrap Clap2("Clap2");

	std::cout << std::endl;
    std::cout << "ClapTrap " << Clap1.getName() << " HitPoint: " << Clap1.getHitPoint() 
	<< ", EnergyPoint: " << Clap1.getEnergyPoint() << ", AttackDamage: " << Clap1.getAttackDamage() << std::endl;
    std::cout << "ClapTrap " << Clap2.getName() << " HitPoint: " << Clap2.getHitPoint() 
	<< ", EnergyPoint: " << Clap2.getEnergyPoint() << ", AttackDamage: " << Clap2.getAttackDamage() << std::endl;
    std::cout << std::endl;
        
	Clap1.attack("Clap2");
	Clap2.takeDamage(5);
	Clap2.beRepaired(5);
	std::cout << std::endl;

    std::cout << "ClapTrap " << Clap1.getName() << " HitPoint: " << Clap1.getHitPoint() 
	<< ", EnergyPoint: " << Clap1.getEnergyPoint() << ", AttackDamage: " << Clap1.getAttackDamage() << std::endl;
    std::cout << "ClapTrap " << Clap2.getName() << " HitPoint: " << Clap2.getHitPoint() 
	<< ", EnergyPoint: " << Clap2.getEnergyPoint() << ", AttackDamage: " << Clap2.getAttackDamage() << std::endl;
    std::cout << std::endl;

	Clap2.attack("Clap1");
	Clap1.takeDamage(10);
	Clap1.beRepaired(10);
	std::cout << std::endl;
    
    std::cout << "ClapTrap " << Clap1.getName() << " HitPoint: " << Clap1.getHitPoint() 
	<< ", EnergyPoint: " << Clap1.getEnergyPoint() << ", AttackDamage: " << Clap1.getAttackDamage() << std::endl;
    std::cout << "ClapTrap " << Clap2.getName() << " HitPoint: " << Clap2.getHitPoint() 
	<< ", EnergyPoint: " << Clap2.getEnergyPoint() << ", AttackDamage: " << Clap2.getAttackDamage() << std::endl;
    std::cout << std::endl;

	return (0);
}