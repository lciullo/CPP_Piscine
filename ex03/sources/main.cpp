/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:51 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/04 20:39:12 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{	
	try
	{
		Intern Ouioui;
		AForm *form;
		form = Ouioui.makeForm("shrubbery creation", "garden");
		Bureaucrat	jean("Jean", 1);
		std::cout << jean << std::endl;
		std::cout << *form << std::endl;
		jean.signForm(*form);
		jean.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===========================";
	std::cout << "Create RobotomyRequestForm" << std::endl;
	try
	{
		Intern Ouioui;
		AForm *form;
		form = Ouioui.makeForm("robotomy_request", "Will");
		Bureaucrat	jean("Jean", 1);
		std::cout << jean << std::endl;
		std::cout << *form << std::endl;
		jean.signForm(*form);
		jean.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===========================";
	std::cout << "Create PresidentialPardonForm\n" << std::endl;
	try
	{
		Intern Ouioui;
		AForm *form;
		form = Ouioui.makeForm("presidential-pardon", "Will");
		Bureaucrat	jean("Jean", 1);
		std::cout << jean << std::endl;
		std::cout << *form << std::endl;
		jean.signForm(*form);
		jean.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "PresidentialPardonForm failure" << std::endl;
	try
	{
		Intern Ouioui;
		AForm *form;
		form = Ouioui.makeForm("presidential unknow", "Will");
		Bureaucrat	jean("Jean", 1);
		std::cout << jean << std::endl;
		std::cout << *form << std::endl;
		jean.signForm(*form);
		jean.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}