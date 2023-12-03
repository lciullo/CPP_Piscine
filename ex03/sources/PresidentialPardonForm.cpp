/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:37 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/03 23:25:52 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("Name", 25, 5) 
{
	std::cout << BLUE << "PresidentialPardonForm : default constructor called" << RESET << std::endl;
	this->_Target = "Target";
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target): AForm("Name", 25, 5)
{
	this->_Target = Target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other)
{
	std::cout << BLUE << "PresidentialPardonForm : copy constructor called" << std::endl;
	this->_Target = other.GetTarget();
	return ;
}

PresidentialPardonForm PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << BLUE << "PresidentialPardonForm :assignement operator called" << RESET << std::endl;
	if (this != &other)
		this->_Target = other._Target;
	return (*this);
}			
				
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << BLUE << "PresidentialPardonForm : destructor called"  << RESET << std::endl;
	return ;
}

std::string	PresidentialPardonForm::GetTarget(void) const
{
	return (this->_Target);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	this->beExecute(executor);
	std::cout << this->GetTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return ;
}