/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:07:22 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/02 15:19:11 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

#include "HumanB.hpp"

#include "HumanA.hpp"

class Weapon
{
	private:
			std::string _type;
	public:
			Weapon(std::string type);
			~Weapon(void);
			std::string const & getType(void);
			void setType(std::string const &_type);     
};

#endif 