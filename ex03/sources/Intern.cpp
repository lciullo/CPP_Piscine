#include "Intern.hpp"

//======    Constructors / Destructors    ======

Intern::Intern(void)
{
    std::cout << MAGENTA << "Intern : default constructor called" << RESET << std::endl;
    return ;
}

Intern::Intern(const Intern &obj)
{
    std::cout << MAGENTA << "Intern : copy constructor called" << std::endl;
    *this = obj;
    return ;    
}

Intern::~Intern(void)
{
    return ;
}

Intern &	Intern::operator=(const Intern &other)
{
    std::cout << MAGENTA << "Intern :assignement operator called" << RESET << std::endl;
	(void)other;
	return (*this);
}

//======	           Methods             ======

AForm *	Intern::makeForm(std::string FormName, std::string TargetName)
{
	std::string	StringArray[] = {"Robot-Lolla", "Presidential-Sacha", "Shrubbery-Alban"};
	AForm	*FormArray[] = {new RobotomyRequestForm(TargetName),
						new PresidentialPardonForm(TargetName),
						new ShrubberyCreationForm(TargetName)};
	for (int i = 0; i < 3; i++)
	{
		if (StringArray[i] == FormName)
			return (FormArray[i]);
		else
		{ 
			delete FormArray[i];
			throw(Intern::InvalidNameFormException());
		}
	}
	
	return (NULL);
}

const char *Intern::InvalidNameFormException::what(void) const throw()
{
	return ("Invalid form name");
}