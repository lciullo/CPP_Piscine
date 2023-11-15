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
				ClapTrap &operator=(const ClapTrap &other);
				void attack(const std::string& target);
				void takeDamage(unsigned int amount);
				void beRepaired(unsigned int amount);
	private :
			   	std::string		_Name;
				unsigned int	_HitPoints;
				unsigned int	_EnergyPoints;
				unsigned int	_AttackDamage;
};

#endif