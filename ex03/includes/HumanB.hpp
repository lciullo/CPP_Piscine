/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:07:25 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/03 17:14:24 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class Weapon;

class HumanB
{
	private:
			std::string _name;
			Weapon		*_weapon;
	public:
			HumanB(std::string name);
			~HumanB(void);
			void attack(void);
			void setWeapon(Weapon &set_weapon);    
};

#endif 