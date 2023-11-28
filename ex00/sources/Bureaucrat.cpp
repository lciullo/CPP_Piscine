/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:48 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/28 11:05:22 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _Name("Name")
{
	this->_Grade = 150;
	std::cout << MAGENTA << "Bureaucrat : default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << MAGENTA << "Bureaucrat : copy constructor called" << std::endl;
	*this = other;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << MAGENTA << "Bureaucrat :assignement operator called" << std::endl;
	if (this != &other)
		this->_Grade = other._Grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << MAGENTA << "Bureaucrat : destructor called" << std::endl;
	return ;
}
std::string	Bureaucrat::GetName(void) const
{
	return (this->_Name);
}

void Bureaucrat::SetGrade(unsigned int Grade) 
{
	this->_Grade = Grade;
	return ;
}

unsigned int Bureaucrat::GetGrade(void) const 
{
	return  (this->_Grade);
}

void Bureaucrat::IncreaseGrade(void)
{
	if (this->_Grade < 150)
		this->_Grade++;
	return ;
}

void Bureaucrat::DecreaseGrade(void)
{
	if (this->_Grade > 1)
		this->_Grade--;
	return ;
}