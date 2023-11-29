/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:48 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/29 10:49:38 by lciullo          ###   ########.fr       */
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

void Bureaucrat::SetGrade(int Grade) 
{
	this->_Grade = Grade;
	return ;
}

int Bureaucrat::GetGrade(void) const 
{
	return  (this->_Grade);
}

void Bureaucrat::IncreaseGrade(void)
{
	if (this->_Grade < 150)
		this->_Grade++;
	else
		throw GradeTooHighException();
	return ;
}

void Bureaucrat::DecreaseGrade(void)
{
	if (this->_Grade > 1)
		this->_Grade--;
	return ;
}

std::string Bureaucrat::GradeTooHighException(void)
{
	return ("Error, grade is too high");
}

std::string Bureaucrat::GradeTooLowException(void)
{
	return ("Error, grade is too low");
}