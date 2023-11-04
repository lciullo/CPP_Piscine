/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:26:38 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/04 13:10:51 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
			std::string _name;
	public:
		    Zombie(void);
            ~Zombie(void);
			void announce(void); 
			void SetName(std::string name);           
};

Zombie* zombieHorde(int N, std::string name );

#endif 