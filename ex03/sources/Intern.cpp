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
	int pos = 0;
	for (int size = 0 ; size < 3; size++)
	{
		if (StringArray[size] == FormName)
			return (FormArray[size]);
		else
		{ 
			pos = size;
			break ;
		}
	}
	for (int i = 0; i < pos; i++) {
        		delete[] StringArray[i].c_str();
			}
			throw(Intern::InvalidNameFormException());
	return (NULL);
}

const char *Intern::InvalidNameFormException::what(void) const throw()
{
	return ("Invalid form name");
}