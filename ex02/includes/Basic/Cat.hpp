/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:24:09 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/21 11:11:38 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

# define CYAN "\033[36m"

class Cat : public Animal 
{
	public		:
					Cat(void);
					Cat(const Cat &other);
					Cat &operator=(const Cat &other);
					~Cat(void);
					void makeSound(void) const;
	private 	:
					Brain* _Brain;
};

#endif 