/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:01:26 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/16 11:01:27 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public  :   
				FragTrap(void);
				FragTrap(const std::string Name);
				FragTrap(const FragTrap &other);
				~FragTrap(void);
				FragTrap &operator=(const FragTrap &other);
				void attack(const std::string& target);
				void highFivesGuys(void);
};

#endif