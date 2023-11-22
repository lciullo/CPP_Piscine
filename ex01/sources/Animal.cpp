/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:04:59 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 10:07:59 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout <<  MAGENTA << "Animal : default constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &other)
{
	std::cout << MAGENTA << "Animal : copy constructor called" << std::endl;
	*this = other;
	return ;
}

Animal::Animal(std::string Type)
{
	std::cout << MAGENTA << "Animal : string asignement constructor called" << std::endl;
	this->_Type = Type;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << MAGENTA << "Animal : assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Type = other._Type;
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << MAGENTA << "Animal : destructor called" << std::endl;
	return ;
}

void Animal::SetType(const std::string &Type) 
{
	this->_Type = Type;
}

std::string	Animal::getType(void) const
{
	return (this->_Type);
}

void Animal::makeSound(void) const
{
	std::cout << MAGENTA << this->_Type << "makes right sound" << std::endl;
	return ;
}