/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:32 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/05 10:17:35 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//======    Constructors / Destructors    ======

AForm::AForm(void): _Name("Name"), _GradeToSign(150), _GradeToExec(150)
{
	std::cout << YELLOW << "AForm : default constructor called" << RESET << std::endl;
	this->_Signed = false;
	return ;
}

AForm::AForm(std::string Name, const int GradeToSign, const int GradeToExec): _Name(Name), _GradeToSign(1), _GradeToExec(1)
{
	this->_Signed = false;
	std::cout << YELLOW << "AForm : default constructor called" << RESET << std::endl;
	if (this->_GradeToSign > 150 || this->_GradeToExec > 150)
		throw GradeTooLowException();
	if (this->_GradeToSign < 1 || this->_GradeToExec < 1)
		throw GradeTooHighException();
	(void)GradeToExec;
	(void)GradeToSign;	
}


AForm::AForm(const AForm &other): _GradeToSign(other._GradeToSign), _GradeToExec(other._GradeToExec)
{
	std::cout << YELLOW << "AForm : copy constructor called" << RESET << std::endl;
	this->_Signed = other.GetSigned();
	return ;
}

AForm &AForm::operator=(const AForm &other)
{
	std::cout << YELLOW << "AForm :assignement operator called" << RESET << std::endl;
	if (this != &other)
		this->_Signed = other._Signed;
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << YELLOW << "AForm : destructor called" << RESET << std::endl;
	return ;
}
//======            Getters                ======

std::string	AForm::GetName(void) const
{
	return (this->_Name);
}

int AForm::GetSigned(void) const
{
	return (this->_Signed);
}

int AForm::GetGradeToSign(void) const 
{
	return  (this->_GradeToSign);
}

int AForm::GetGradeToExec(void) const 
{
	return  (this->_GradeToExec);
}

//=====	            Exceptions             ====== 

char const *AForm::GradeTooHighException::what() const throw()
{
	
	return ("Error, grade is too high");
}

char const *AForm::GradeTooLowException::what() const throw()
{
	return ("Error, grade is too low");
}

const char *AForm::NotSignedException::what() const throw()
{
	return ("Form isn't signed");
}
//=====	            Methods               ====== 

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.GetGrade() <= this->_GradeToSign)
		this->_Signed = true;
	else 
		throw (AForm::GradeTooLowException());
}

void	AForm::beExecute(Bureaucrat const & executor) const
{
	if (!this->GetSigned())
		throw NotSignedException();
	else if (executor.GetGrade() > this->GetGradeToExec())
		throw GradeTooLowException();
	return ;
}

std::ostream &operator<<(std::ostream &out, const AForm &Object)
{
	if (Object.GetSigned() == true)
		out << YELLOW << Object.GetName() << "is signed" << RESET << std::endl;
	else
	{
		out << YELLOW << Object.GetName() << "couldn't sign form because is already signed " << RESET << std::endl;
	}
	return (out);
}