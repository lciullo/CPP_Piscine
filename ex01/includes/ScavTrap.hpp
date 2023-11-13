#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap 
{
	public  :   
				ScavTrap(void);
                ScavTrap(const std::string Name);
				~ScavTrap(void);
                ScavTrap(const ScavTrap &other);
                void guardGate(void);
	private :
			   	std::string _Name;
				int			_HitPoints;
				int			_EnergyPoints;
				int			_AttackDamage;
};

#endif