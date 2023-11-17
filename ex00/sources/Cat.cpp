/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:22:19 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/17 10:33:10 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void)
{
	std::cout << CYAN << "Cat    : default constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &other)
{
	std::cout << CYAN << "Cat    : copy constructor called" << std::endl;
	*this = other;
	return ;
}

Cat::~Cat(void)
{
	std::cout << CYAN << "Cat    : destructor called" << std::endl;
	return ;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << CYAN << "Cat    : assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Type = other._Type;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << CYAN << "Sound  : Miaaaaoouuuu..." << std::endl;
}