/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:36:29 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/05 14:36:31 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


//======	            Exceptions         ======

const char *Intern::InvalidNameFormException::what(void) const throw()
{
	return ("invalid form name");
}

//======	           Methods             ======


AForm *	Intern::makeForm(std::string FormName, std::string TargetName)
{
	std::string	StringArray[] = {"Robot-Lolla", "Presidential-Sacha", "Shrubbery-Alban"};
	AForm	*FormArray[] = {new RobotomyRequestForm(TargetName),
						new PresidentialPardonForm(TargetName),
						new ShrubberyCreationForm(TargetName)};
	for (int size = 0 ; size < 3; size++)
	{
		if (StringArray[size] == FormName)
		{
			for (int index = size + 1; index < size; index++)
			{
				delete FormArray[index];
				
			}
			return (FormArray[size]);
		}
		else
			delete FormArray[size];
			
	}
	throw(Intern::InvalidNameFormException());		
	return (NULL);
}

