#include "Form.hpp"

Form::Form(void): _Name("Name"), _Grade(1)
{
	std::cout << MAGENTA << "Form : default constructor called" << std::endl;
	this->_Signed = true;
    return ;
}

/*Form::Form(std::string Name, int Grade, bool Signed): _Name(Name)
{
	std::cout << "grade = " << Grade << std::endl;
	std::cout << BLUE << "Form : default constructor called" << std::endl;
	if (Grade < 1)
		throw (Form::GradeTooLowException());
	else if (Grade > 150)
		throw (Form::GradeTooHighException());
	this->_Grade = Grade;
    this->_Signed = Signed;
}

Form::Form(const Form &other)
{
	std::cout << MAGENTA << "Form : copy constructor called" << std::endl;
	*this = other;
	return ;
}

Form &Form::operator=(const Form &other)
{
	std::cout << MAGENTA << "Form :assignement operator called" << std::endl;
	if (this != &other)
		this->_Grade = other._Grade;
	return (*this);
}*/

Form::~Form(void)
{
	std::cout << MAGENTA << "Form : destructor called" << std::endl;
	return ;
}

/*std::string	Form::GetName(void) const
{
	return (this->_Name);
}

int Form::GetGrade(void) const 
{
	if (this->_Grade < 1)
		throw (Form::GradeTooHighException());
	else if (this->_Grade > 150)
		throw (Form::GradeTooLowException());
	return  (this->_Grade);
}

void Form::IncreaseGrade(void)
{
	if (this->_Grade - 1 >= 1)
		this->_Grade--;
	else
		throw GradeTooHighException();
	return ;
}

void Form::DecreaseGrade(void)
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
}*/