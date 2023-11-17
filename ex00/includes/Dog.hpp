/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:22:26 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/17 10:25:31 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

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