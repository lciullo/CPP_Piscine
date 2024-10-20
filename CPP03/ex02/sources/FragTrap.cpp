/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:01:39 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/16 11:43:21 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->_Name = "Name";
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap : default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const std::string Name): ClapTrap(Name)
{	
	this->_Name = Name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100; 
	this->_AttackDamage = 30;
	std::cout << "FragTrap : string Name constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << "FragTrap : copy constructor called" << std::endl;
	*this = other;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap : destructor called" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap : assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if ((this->_HitPoints <= 0) || (this->_EnergyPoints <= 0))
	{
		std::cout << "FragTrap " << this->_Name << " can't attack." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_Name << " attacks " \
		<< target << " causing " << this->_AttackDamage << " points of damage ! "<< std::endl;
	this->_EnergyPoints--;
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap : highFivesGuys !" << std::endl; 
	return ;
}