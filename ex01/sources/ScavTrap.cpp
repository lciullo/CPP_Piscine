#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap : default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string Name): ClapTrap(Name) 
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap : string Name constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap : destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	std::cout << "ScavTrap : copy constructor called" << std::endl;
	*this = other;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap : assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return (*this);
}

