/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:51:03 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 10:04:54 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

# define YELLOW	"\033[33m"

class WrongCat : public WrongAnimal 
{
	public		:
					WrongCat(void);
					WrongCat(const WrongCat &other);
					WrongCat &operator=(const WrongCat &other);
					~WrongCat(void);
					std::string	getType(void) const;
					void SetType(const std::string & );
					void makeSound(void) const;
};

#endif 