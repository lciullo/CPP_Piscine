/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:55:42 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 10:32:22 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(void)
{
	std::cout << YELLOW << "WrongCat    : default constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << YELLOW << "WrongCat    : copy constructor called" << std::endl;
	*this = other;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << YELLOW << "WrongCat    : destructor called" << std::endl;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << YELLOW << "WrongCat    : assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Type = other._Type;
	}
	return (*this);
}

std::string	WrongCat::getType(void) const
{
	return (this->_Type);
}

void WrongCat::SetType(const std::string &Type) 
{
	this->_Type = Type;
}

void	WrongCat::makeSound(void) const
{
	std::cout << YELLOW << "makes  : Grrrrrrrrrrrrrr..." << std::endl;
}