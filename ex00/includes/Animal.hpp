/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:45:26 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/16 15:14:18 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
	protected	: 
					std::string _Type;

	public		:
					Animal(void);
					Animal(const Animal &other);
					Animal &operator=(const Animal &other);
					~Animal(void);
};

#endif 