/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:22:26 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/21 12:39:42 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

# define GREEN "\033[32m"

class Dog : public Animal 
{
	public		:
					Dog(void);
					Dog(const Dog &other);
					Dog &operator=(const Dog &other);
					~Dog(void);
					void makeSound(void) const;
};

#endif 