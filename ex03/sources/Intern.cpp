#include "Intern.hpp"

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

AForm *	Intern::makeForm(std::string FormName, std::string TargetName)
{
	std::string	Row[] = {"Robot-Lolla", "Presidential-Sacha", "Shrubbery-Alban"};
	AForm	*Array[] = {new RobotomyRequestForm(TargetName),
						new PresidentialPardonForm(TargetName),
						new ShrubberyCreationForm(TargetName)};
	for (int i = 0; i < 3; i++)
	{
		if (Row[i] == FormName)
			return (Array[i]);
		else 
			delete Array[i];
	}
	std::cout << MAGENTA << FormName << " doesn't exist" << RESET << std::endl;
	return (NULL);
}