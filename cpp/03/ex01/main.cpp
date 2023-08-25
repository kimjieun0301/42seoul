#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap Scav1("Scav1");
	ScavTrap Scav2("Scav2");

	std::cout << std::endl;
    std::cout << "ScavTrap " << Scav1.getName() << " HitPoint: " << Scav1.getHitPoint() 
	<< ", EnergyPoint: " << Scav1.getEnergyPoint() << ", AttackDamage: " << Scav1.getAttackDamage() << std::endl;
    std::cout << "ScavTrap " << Scav2.getName() << " HitPoint: " << Scav2.getHitPoint() 
	<< ", EnergyPoint: " << Scav2.getEnergyPoint() << ", AttackDamage: " << Scav2.getAttackDamage() << std::endl;
    std::cout << std::endl;
        
	Scav1.attack("Scav2");
	Scav2.takeDamage(Scav1.getAttackDamage());
	Scav2.beRepaired(5);
	std::cout << std::endl;

    std::cout << "ScavTrap " << Scav1.getName() << " HitPoint: " << Scav1.getHitPoint() 
	<< ", EnergyPoint: " << Scav1.getEnergyPoint() << ", AttackDamage: " << Scav1.getAttackDamage() << std::endl;
    std::cout << "ScavTrap " << Scav2.getName() << " HitPoint: " << Scav2.getHitPoint() 
	<< ", EnergyPoint: " << Scav2.getEnergyPoint() << ", AttackDamage: " << Scav2.getAttackDamage() << std::endl;
    std::cout << std::endl;

	Scav2.attack("Scav1");
	Scav1.takeDamage(Scav2.getAttackDamage());
	Scav1.beRepaired(10);
	std::cout << std::endl;
    
    std::cout << "ScavTrap " << Scav1.getName() << " HitPoint: " << Scav1.getHitPoint() 
	<< ", EnergyPoint: " << Scav1.getEnergyPoint() << ", AttackDamage: " << Scav1.getAttackDamage() << std::endl;
    std::cout << "ScavTrap " << Scav2.getName() << " HitPoint: " << Scav2.getHitPoint() 
	<< ", EnergyPoint: " << Scav2.getEnergyPoint() << ", AttackDamage: " << Scav2.getAttackDamage() << std::endl;
    std::cout << std::endl;

    Scav1.guardGate();
    Scav2.guardGate();
	std::cout << std::endl;

	return (0);
}