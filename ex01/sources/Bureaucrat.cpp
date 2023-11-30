/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:48 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/30 12:45:46 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _Name("Name")
{
	this->_Grade = 1;
	std::cout << MAGENTA << "Bureaucrat : default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade): _Name(Name)
{
	std::cout << BLUE << "Bureaucrat : default constructor called" << std::endl;
	if (Grade < 1)
		throw (Bureaucrat::GradeTooLowException());
	else if (Grade > 150)
		throw (Bureaucrat::GradeTooHighException());
	this->_Grade = Grade;
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

int Bureaucrat::GetGrade(void) const 
{
	if (this->_Grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->_Grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	return  (this->_Grade);
}

void Bureaucrat::IncreaseGrade(void)
{
	if (this->_Grade - 1 >= 1)
		this->_Grade--;
	else
		throw GradeTooHighException();
	return ;
}

void Bureaucrat::DecreaseGrade(void)
{
	if (this->_Grade + 1 <= 150) 
		this->_Grade++;
	else
		throw GradeTooLowException();
	return ;
}

char const *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Error, grade is too high");
}

char const *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Error, grade is too low");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Object)
{
	out << Object.GetName() << ", bureaucrat grade " << Object.GetGrade() << std::endl;
	return (out);
}
