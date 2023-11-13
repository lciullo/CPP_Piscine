#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
	public  :   
				ClapTrap(void);
				ClapTrap(const std::string Name);
				ClapTrap(const ClapTrap &other);
				~ClapTrap(void);
				void attack(const std::string& target);
				void takeDamage(unsigned int amount);
				void beRepaired(unsigned int amount);
	private :
			   	std::string _Name;
				int         _HitPoint;
				int			_EnergyPoint;
				int			_AttackDamage;
};

#endif