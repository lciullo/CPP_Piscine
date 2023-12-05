/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:36:01 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/05 10:30:40 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//======    Constructors / Destructors    ======
Form::Form(void): _Name("Name"), _GradeToSign(150), _GradeToExec(150)
{
	std::cout << YELLOW << "Form : default constructor called" << RESET << std::endl;
	this->_Signed = false;
	return ;
}

Form::Form(std::string Name, const int GradeToSign, const int GradeToExec): _Name(Name), _GradeToSign(150), _GradeToExec(150)
{
	this->_Signed = false;
	std::cout << YELLOW << "Form : default constructor called" << RESET << std::endl;
	if (GradeToSign < 1)
		throw (Form::GradeTooHighException());
	if (GradeToSign > 150)
		throw (Form::GradeTooLowException());
	if (GradeToExec < 1)
		throw (Form::GradeTooHighException());
	if (GradeToExec > 150)
		throw (Form::GradeTooLowException());	
}


Form::Form(const Form &other): _GradeToSign(other._GradeToSign), _GradeToExec(other._GradeToExec)
{
	std::cout << YELLOW << "Form : copy constructor called" << RESET << std::endl;
	*this = other;
	return ;
}

Form &Form::operator=(const Form &other)
{
	std::cout << YELLOW << "Form :assignement operator called" << RESET << std::endl;
	if (this != &other)
		this->_Signed = other._Signed;
	return (*this);
}

Form::~Form(void)
{
	std::cout << YELLOW << "Form : destructor called" << RESET << std::endl;
	return ;
}
//======            Getters                ======

std::string	Form::GetName(void) const
{
	return (this->_Name);
}

int Form::GetSigned(void) const
{
	return (this->_Signed);
}

int Form::GetGradeToSign(void) const 
{
	if (this->_GradeToSign < 1)
		throw (Form::GradeTooHighException());
	else if (this->_GradeToSign > 150)
		throw (Form::GradeTooLowException());
	return  (this->_GradeToSign);
}

int Form::GetGradeToExec(void) const 
{
	if (this->_GradeToExec < 1)
		throw (Form::GradeTooHighException());
	else if (this->_GradeToExec > 150)
		throw (Form::GradeTooLowException());
	return  (this->_GradeToExec);
}

//=====	            Exceptions             ====== 

char const *Form::GradeTooHighException::what() const throw()
{
	
	return ("Error, grade is too high");
}

char const *Form::GradeTooLowException::what() const throw()
{
	return ("Error, grade is too low");
}
//=====	            Methods               ====== 

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.GetGrade() <= this->_GradeToSign)
		this->_Signed = true;
	else 
		throw (Form::GradeTooLowException());
}

std::ostream &operator<<(std::ostream &out, const Form &Object)
{
	if (Object.GetSigned() == true)
		out << YELLOW << Object.GetName() << "is signed" << RESET << std::endl;
	else
	{
		out << YELLOW << Object.GetName() << "couldn't sign form because is already signed " << RESET << std::endl;
	}
	return (out);
}