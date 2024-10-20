/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:07:58 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/04 13:18:43 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
	std::cout << this->_name << " wants to fight!" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}
void	HumanB::setWeapon(Weapon &set_weapon)
{
	this->_weapon = &set_weapon;
}

void	HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attack with no weapon" << std::endl;
}