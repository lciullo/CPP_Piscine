/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:48 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 13:34:59 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << MAGENTA << "Bureaucrat : default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << MAGENTA << "Bureaucrat : copy constructor called" << std::endl;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << MAGENTA << "Bureaucrat :assignement operator called" << std::endl;
	if (this != &other)
		this->_Name = other._Name;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << MAGENTA << "Bureaucrat : destructor called" << std::endl;
	return ;
}

void Bureaucrat::SetName(const std::string &Name) 
{
	this->_Name = Name;
	return ;
}


std::string	Bureaucrat::GetName(void) const
{
	return (this->_Name);
}