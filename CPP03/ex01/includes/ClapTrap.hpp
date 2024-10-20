/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:00:01 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/16 11:40:55 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#include <limits>

class ClapTrap 
{
	public  :   
				ClapTrap(void);
				ClapTrap(const std::string Name);
				ClapTrap(const ClapTrap &other);
				~ClapTrap(void);
				ClapTrap &operator=(const ClapTrap &other);
				void attack(const std::string& target);
				void takeDamage(unsigned int amount);
				void beRepaired(unsigned int amount);
	protected :
			   	std::string 	_Name;
				unsigned int	_HitPoints;
				unsigned int	_EnergyPoints;
				unsigned int	_AttackDamage;
};

#endif