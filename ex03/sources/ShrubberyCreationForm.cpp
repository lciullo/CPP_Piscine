/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:42 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/03 23:30:38 by lisa             ###   ########.fr       */
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

std::string	ShrubberyCreationForm::GetTarget(void) const
{
	return (this->_Target);
}

const char *ShrubberyCreationForm::FileNotOpenException::what(void) const throw()
{
	return ("Error file could not be open");
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::fstream File;
	this->beExecute(executor);
	File.open(this->GetTarget().append("_shrubbery").c_str() , std::ios::out);
	if (File.is_open() == false)
		throw (ShrubberyCreationForm::FileNotOpenException());
	File << "  X "
			" XXXXX "
			"XXXXXXX"
			"  || "
			"    0 "
			"  00000 "
			" 0000000 "
			" 00000000 "
			 "   | | " << std::endl;
	File.close();
	return ;
}
