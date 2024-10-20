/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:22:26 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 10:17:27 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

# define GREEN "\033[32m"

class Dog : public Animal 
{
	public		:
					Dog(void);
					Dog(const Dog &other);
					Dog &operator=(const Dog &other);
					~Dog(void);
					std::string	getType(void) const;
					void SetType(const std::string & );
					Brain *GetBrain(void) const ;
					void SetBrain(Brain *);
					void makeSound(void) const;
	private 	:
					Brain* _Brain;
};

#endif 