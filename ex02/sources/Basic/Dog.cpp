/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:22:22 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/21 12:00:36 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void)
{
	std::cout << GREEN << "Dog    : default constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog &other)
{
	std::cout << GREEN << "Dog    : copy constructor called" << std::endl;
	*this = other;
	return ;
}

Dog::~Dog(void)
{
	std::cout << GREEN << "Dog    : destructor called" << std::endl;
	return ;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << GREEN << "Dog    : assignment operator called" << std::endl;
	if (this != &other)
	{
		delete this->_Brain;
		this->_Brain = new Brain(*other._Brain);
		this->_Type = other._Type;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << GREEN << this->_Type << "makes : Woooooooooff..." << std::endl;
}