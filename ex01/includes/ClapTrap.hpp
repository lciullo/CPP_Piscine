#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#include "ScavTrap.hpp"

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
			   	std::string _Name;
				int			_HitPoints;
				int			_EnergyPoints;
				int			_AttackDamage;
};

#endif