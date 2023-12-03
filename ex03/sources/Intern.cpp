#include "Intern.hpp"

Intern::Intern(void)
{
    return ;
}

Intern::Intern(const Intern &obj)
{
    *this = obj;
    return ;    
}

Intern::~Intern(void)
{
    return ;
}

Intern &	Intern::operator=(const Intern &obj)
{
	(void)obj;
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
	std::cout << RED << FormName << " doesn't exist" << RESET << std::endl;
	return (NULL);
}