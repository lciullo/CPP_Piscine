/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:04:59 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/16 15:14:33 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal : default constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal : copy constructor called" << std::endl;
	*this = other;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal : destructor called" << std::endl;
	return ;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal : assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Type = other._Type;
	}
	return (*this);
}
