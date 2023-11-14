#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void): _Name(std::string("Name")), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap : default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string Name): _Name(Name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap : string Name constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap : copy constructor called" << std::endl;
	*this = other;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap : destructor called" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if ((this->_HitPoints <= 0) || (this->_EnergyPoints <= 0))
	{
		std::cout << "ClapTrap " << this->_Name << " can't attack." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " points of damage ! "<< std::endl;
	this->_EnergyPoints--;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is K.O." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " takes " << amount << " points of damage!" << std::endl;
	this->_HitPoints -= amount;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->_HitPoints <= 0) || (this->_EnergyPoints <= 0))
	{
		std::cout << "ClapTrap " << this->_Name << " can't be treat" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " be repaired with " << amount << " new points of life!" << std::endl;
	this->_HitPoints += amount;
	this->_EnergyPoints--;
	return ;
}