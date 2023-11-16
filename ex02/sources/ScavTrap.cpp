/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:01:58 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/16 12:18:05 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap : default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string Name): ClapTrap(Name) 
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
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

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap : " << this->_Name \
		<< " that ScavTrap is now in Gate Keeper mode " << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string &target)
{
	if ((this->_HitPoints <= 0) || (this->_EnergyPoints <= 0))
	{
		std::cout << "ScavTrap " << this->_Name << " can't attack." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_Name << " attacks " \
		<< target << " causing " << this->_AttackDamage << " points of damage ! "<< std::endl;
	this->_EnergyPoints--;
	return ;
}