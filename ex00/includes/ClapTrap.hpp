#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
	public  :   
				ClapTrap(void);
				ClapTrap(const std::string Name);
				~ClapTrap(void);

	private :
			   	std::string _Name;
				int         _HitPoint;
				int			_EnergyPoint;
				int			_AttackDamage;
};

#endif