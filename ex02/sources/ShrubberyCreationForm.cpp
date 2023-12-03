/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:42 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/03 17:18:29 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("Name", 145, 137) 
{
	std::cout << CYAN << "ShrubberyCreationForm : default constructor called" << RESET << std::endl;
	this->_Target = "Target";
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target): AForm("Name", 25, 5)
{
	this->_Target = Target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other)
{
	std::cout << CYAN << "ShrubberyCreationForm : copy constructor called" << std::endl;
	*this = other;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << CYAN << "ShrubberyCreationForm :assignement operator called" << RESET << std::endl;
	if (this != &other)
		this->_Target = other._Target;
	return (*this);
}			
				
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << CYAN << "ShrubberyCreationForm : destructor called"  << RESET << std::endl;
	return ;
}

/*void ShrubberyCreationForm::CreateTrees(void)
{
    
}*/

std::string	ShrubberyCreationForm::GetTarget(void) const
{
	return (this->_Target);
}