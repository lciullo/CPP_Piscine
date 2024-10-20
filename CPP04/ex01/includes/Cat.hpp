/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:24:09 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 10:44:47 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

class Cat : public Animal 
{
	public		:
					Cat(void);
					Cat(const Cat &other);
					Cat &operator=(const Cat &other);
					~Cat(void);
					std::string	getType(void) const;
					void SetType(const std::string & );
					Brain *GetBrain(void) const ;
					void SetBrain(Brain *);
					void makeSound(void) const;
	private 	:
					Brain* _Brain;
};

#endif 