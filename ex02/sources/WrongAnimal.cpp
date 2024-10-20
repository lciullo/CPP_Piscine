/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:13:55 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 10:31:45 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << RED << "WrongAnimal : default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << RED << "WrongAnimal : copy constructor called" << std::endl;
	*this = other;
	return ;
}

WrongAnimal::WrongAnimal(std::string Type)
{
	std::cout << RED << "WrongAnimal : string asignement constructor called" << std::endl;
	this->_Type = Type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << RED << "WrongAnimal : assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Type = other._Type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "WrongAnimal : destructor called" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_Type);
}

void WrongAnimal::SetType(const std::string &Type) 
{
	this->_Type = Type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << RED << this->_Type << "makes weird sound" << std::endl;
	return ;
}
