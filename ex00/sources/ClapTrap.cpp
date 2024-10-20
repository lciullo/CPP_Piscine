/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:59:36 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/16 11:35:23 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_Name = "Name";
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string Name)
{
	this->_Name = Name;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
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

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap : assignment operator called" << std::endl;
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
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " \
		<< this->_AttackDamage << " points of damage ! "<< std::endl;
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
	std::cout << "ClapTrap " << this->_Name << " takes " \
		<< amount << " points of damage!" << std::endl;
	if (amount > this->_HitPoints)
	{
		this->_HitPoints = 0;
		return ;
	}
	else if (this->_HitPoints > std::numeric_limits<unsigned int>::max() - amount)
	{
		std::cerr << "ClapTrap : Error HitPoints has overflow " << std::endl;
		return ;
	}
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
	else if (this->_HitPoints > std::numeric_limits<unsigned int>::max() - amount)
	{
		std::cerr << "ClapTrap : Error HitPoints has overflow " << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " be repaired with " \
		<< amount << " new points of life!" << std::endl;
	this->_HitPoints += amount;
	this->_EnergyPoints--;
	return ;
}