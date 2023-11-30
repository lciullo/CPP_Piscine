#include "Form.hpp"

Form::Form(void): _Name("Name"), _GradeToSign(1), _GradeToExec(1)
{
	std::cout << YELLOW << "Form : default constructor called" << RESET << std::endl;
	this->_Signed = false;
	return ;
}

Form::Form(std::string Name, int GradeToSign, int GradeToExec): _Name(Name), _GradeToSign(1), _GradeToExec(1)
{
	std::cout << YELLOW << "Form : default constructor called" << RESET << std::endl;
	if (GradeToSign < 1)
		throw (Form::GradeTooLowException());
	else if (GradeToSign > 150)
		throw (Form::GradeTooHighException());
	if (GradeToExec < 1)
		throw (Form::GradeTooLowException());
	else if (GradeToExec > 150)
		throw (Form::GradeTooHighException());
	this->_Signed = false;
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

char const *Form::GradeTooHighException::what(void) const throw()
{
	return ("Error, grade is too high");
}

char const *Form::GradeTooLowException::what(void) const throw()
{
	return ("Error, grade is too low");
}

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
		out << Object.GetName() << "is signed";
	else
	{
		out << Object.GetName() << "couldn't sign form because is already signed " << std::endl;
	}
	return (out);
}