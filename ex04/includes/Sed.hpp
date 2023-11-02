/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:07:22 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/02 15:25:00 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

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