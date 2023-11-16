/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:22:19 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/16 15:23:53 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat(void)
{
	std::cout << "Cat : default constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat : copy constructor called" << std::endl;
	*this = other;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat : destructor called" << std::endl;
	return ;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat : assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Type = other._Type;
	}
	return (*this);
}