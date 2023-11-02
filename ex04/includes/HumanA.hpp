/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:07:28 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/02 15:05:18 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class Weapon;

class HumanA
{
	private:
			std::string _name;
			Weapon		&_weapon;
	public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA(void);
			void attack(void);
			void setWeapon(Weapon set_weapon); 	   
};

#endif 