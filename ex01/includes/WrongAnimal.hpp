/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:14:49 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 10:07:16 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define RED "\033[31m"

#include <iostream>

class WrongAnimal
{
	public	:
				WrongAnimal(void);
				WrongAnimal(std::string Type);
				WrongAnimal(const WrongAnimal &other);
				WrongAnimal &operator=(const WrongAnimal &other);
				~WrongAnimal(void);
				std::string	getType(void) const;
				void SetType(const std::string & );
				void makeSound(void) const;
	protected : 
				std::string _Type;

	
};

#endif 
