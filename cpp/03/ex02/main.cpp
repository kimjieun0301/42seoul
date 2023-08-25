#include "FragTrap.hpp"

int	main(void)
{
	FragTrap Frag1("Frag1");
	FragTrap Frag2("Frag2");

	std::cout << std::endl;
    std::cout << "FragTrap " << Frag1.getName() << " HitPoint: " << Frag1.getHitPoint() 
	<< ", EnergyPoint: " << Frag1.getEnergyPoint() << ", AttackDamage: " << Frag1.getAttackDamage() << std::endl;
    std::cout << "FragTrap " << Frag2.getName() << " HitPoint: " << Frag2.getHitPoint() 
	<< ", EnergyPoint: " << Frag2.getEnergyPoint() << ", AttackDamage: " << Frag2.getAttackDamage() << std::endl;
    std::cout << std::endl;
        
	Frag1.attack("Frag2");
	Frag2.takeDamage(Frag1.getAttackDamage());
	Frag2.beRepaired(5);
	std::cout << std::endl;

    std::cout << "FragTrap " << Frag1.getName() << " HitPoint: " << Frag1.getHitPoint() 
	<< ", EnergyPoint: " << Frag1.getEnergyPoint() << ", AttackDamage: " << Frag1.getAttackDamage() << std::endl;
    std::cout << "FragTrap " << Frag2.getName() << " HitPoint: " << Frag2.getHitPoint() 
	<< ", EnergyPoint: " << Frag2.getEnergyPoint() << ", AttackDamage: " << Frag2.getAttackDamage() << std::endl;
    std::cout << std::endl;

	Frag2.attack("Frag1");
	Frag1.takeDamage(Frag2.getAttackDamage());
	Frag1.beRepaired(10);
	std::cout << std::endl;
    
    std::cout << "FragTrap " << Frag1.getName() << " HitPoint: " << Frag1.getHitPoint() 
	<< ", EnergyPoint: " << Frag1.getEnergyPoint() << ", AttackDamage: " << Frag1.getAttackDamage() << std::endl;
    std::cout << "FragTrap " << Frag2.getName() << " HitPoint: " << Frag2.getHitPoint() 
	<< ", EnergyPoint: " << Frag2.getEnergyPoint() << ", AttackDamage: " << Frag2.getAttackDamage() << std::endl;
    std::cout << std::endl;

    Frag1.highFivesGuys();
    Frag2.highFivesGuys();
	std::cout << std::endl;

	return (0);
}