#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void): _Name(std::string("Name")), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string Name): _Name(Name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout << "String Name constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}