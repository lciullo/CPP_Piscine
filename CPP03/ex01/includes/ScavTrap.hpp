/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:00:26 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/16 11:39:54 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <limits>

class ScavTrap: public ClapTrap
{
	public  :   
				ScavTrap(void);
                ScavTrap(const std::string Name);
                ScavTrap(const ScavTrap &other);
				~ScavTrap(void);
				ScavTrap &operator=(const ScavTrap &other);
				void attack(const std::string& target);
                void guardGate(void);
};

#endif