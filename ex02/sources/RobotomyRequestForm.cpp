/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:40 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/03 17:20:03 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("Name", 72, 45) 
{
	std::cout << RED << "RobotomyRequestForm : default constructor called" << RESET << std::endl;
	this->_Target = "Target";
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target): AForm("Name", 25, 5)
{
	this->_Target = Target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other)
{
	std::cout << RED << "RobotomyRequestForm : copy constructor called" << std::endl;
	*this = other;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << RED << "RobotomyRequestForm :assignement operator called" << RESET << std::endl;
	if (this != &other)
		this->_Target = other._Target;
	return (*this);
}			
				
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << RED << "RobotomyRequestForm : destructor called"  << RESET << std::endl;
	return ;
}

std::string	RobotomyRequestForm::GetTarget(void) const
{
	return (this->_Target);
}