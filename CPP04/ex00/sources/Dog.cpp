/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:22:22 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 10:02:25 by lciullo          ###   ########.fr       */
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
		this->_Type = other._Type;
	return (*this);
}

void Dog::SetType(const std::string &Type) 
{
	this->_Type = Type;
}

std::string	Dog::getType(void) const
{
	return (this->_Type);
}


void	Dog::makeSound(void) const
{
	std::cout << GREEN << " makes : Woooooooooff..." << std::endl;
}