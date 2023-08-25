#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap 
{
    private:
        std::string name;
        unsigned int HitPoint;
        unsigned int EnergyPoint;
        unsigned int AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& ct);
        ClapTrap& operator=(const ClapTrap& ct);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName() const;
        unsigned int getHitPoint() const;
        unsigned int getEnergyPoint()const;
		unsigned int getAttackDamage()const;
};

#endif