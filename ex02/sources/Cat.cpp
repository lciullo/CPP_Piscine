/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:22:19 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 11:01:05 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void)
{
	std::cout << CYAN << "Cat    : default constructor called" << std::endl;
	this->_Type = "Cat";
	this->_Brain = new Brain();
	return ;
}

Cat::Cat(const Cat &other)
{
	std::cout << CYAN << "Cat    : copy constructor called" << std::endl;
	*this = other;
	this->_Brain = new Brain(*other._Brain);
	return ;
}

Cat::~Cat(void)
{
	std::cout << CYAN << "Cat    : destructor called" << std::endl;
	delete this->_Brain;
	return ;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << CYAN << "Cat    : assignment operator called" << std::endl;
	if (this != &other)
		this->_Type = other._Type;
	return (*this);
}

void Cat::SetType(const std::string &Type) 
{
	this->_Type = Type;
}

std::string	Cat::getType(void) const
{
	return (this->_Type);
}

Brain*	Cat::GetBrain(void) const 
{
	return (this->_Brain);
}

void	Cat::SetBrain(Brain *Brain) 
{
	this->_Brain = Brain;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << CYAN << "makes  : Miaaaaoouuuu..." << std::endl;
}