/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:42 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/05 14:16:00 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//======    Constructors / Destructors    ======

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

//======            Getters                ======

std::string	ShrubberyCreationForm::GetTarget(void) const
{
	return (this->_Target);
}

//======	            Exceptions         ======

const char *ShrubberyCreationForm::FileNotOpenException::what(void) const throw()
{
	return ("Error file could not be open");
}

//======	           Method             ======

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	this->beExecute(executor);
	std::ofstream File;
	File.open(this->GetTarget().append("_shrubbery").c_str() , std::ios::out);
	if (File.is_open() == false)
		throw (ShrubberyCreationForm::FileNotOpenException());
	File << "   X " << std::endl;
	File <<	" XXXXX " << std::endl;
	File << "XXXXXXX" << std::endl;
	File << "  || " << std::endl;
	File << "    0 " << std::endl;
	File << "  00000 " << std::endl;
	File << " 0000000 " << std::endl;
	File << " 00000000 " << std::endl;
	File << "   | | " << std::endl;
	File.close();
	return ;
}
