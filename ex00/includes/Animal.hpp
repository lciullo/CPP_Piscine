/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:45:26 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/17 10:38:58 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"

class Animal
{
	public	:
				Animal(void);
				Animal(std::string Type);
				Animal(const Animal &other);
				Animal &operator=(const Animal &other);
				~Animal(void);
				std::string	getType(void) const;
				virtual void makeSound(void) const;
	protected : 
				std::string _Type;

	
};

#endif 