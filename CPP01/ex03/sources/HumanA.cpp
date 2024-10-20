/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:08:01 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/02 15:18:04 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	this->_name = name;
	this->_weapon = weapon;
	std::cout << this->_name << " wants to fight !" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " win the fight !" << std::endl;
	return ;
}
void HumanA::setWeapon(Weapon set_weapon)
{
	this->_weapon = set_weapon;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}
