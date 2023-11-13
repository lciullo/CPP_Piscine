#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void): _Name(std::string("Name")), _HitPoints(100), _EnergyPoints(50), _AttackDamage(20)
{
	std::cout << "ScavTrap : default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string Name): _Name(Name), _HitPoints(100), _EnergyPoints(50), _AttackDamage(20)
{
	std::cout << "ScavTrap : string Name constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap : copy constructor called" << std::endl;
	*this = other;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ClapTrap : destructor called" << std::endl;
	return ;
}