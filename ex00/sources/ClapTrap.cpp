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

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string &target)
{
	if ((this->_HitPoint <= 0) || (_this->EnergyPoint) <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage ! "<< std::endl;
	this->_EnergyPoint--;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is K.O." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
	this->_HitPoints -= amount;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->_HitPoints <= 0) || (this->_EnergyPoint <= 0))
	{
		std::cout << "ClapTrap " << this->_name << " can't be neat" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " be repaired with " << amount << " new points of life!" << std::endl;
	this->_HitPoints += amount;
	this->_EnergyPoints--;
	return ;
}