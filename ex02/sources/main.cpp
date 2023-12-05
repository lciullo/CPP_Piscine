/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:51 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/05 14:02:39 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main( void )
{
	std::cout << "Grade too high\n" << std::endl;
	try
	{
		Bureaucrat mike("Mike", 0);
		std::cout << mike << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "================" << std::endl;
	std::cout << "Grade too low\n" << std::endl;
	try
	{
		Bureaucrat jim("Jim", 151);
		std::cout << jim << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "======================" << std::endl;
	std::cout << "Increase Grade" << std::endl;
	try 
	{
		Bureaucrat dur("Dur", 3);
		std::cout << dur << std::endl;
		dur.IncreaseGrade();
		std::cout << dur << std::endl;
		dur.IncreaseGrade();
		std::cout << dur << std::endl;
		dur.IncreaseGrade();
		std::cout << dur << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "======================" << std::endl;
	std::cout << "Decrease Grade" << std::endl;
	try 
	{
		Bureaucrat alan("Alan", 149);
		std::cout << alan << std::endl;
		alan.DecreaseGrade();
		std::cout << alan << std::endl;
		alan.DecreaseGrade();
		std::cout << alan << std::endl;
		alan.DecreaseGrade();
		std::cout << alan << std::endl;
	}
	catch (std::exception &e)
	{
			std::cout << e.what() << std::endl;
	}
	std::cout << "======================" << std::endl;
	std::cout << "Throw exception when signing form\n" << std::endl;
	try
	{
		Bureaucrat	jean("Jean", 1);
		Bureaucrat	marcel("Marcel", 150);
		RobotomyRequestForm	a72("Tree");
		std::cout << jean << std::endl;
		std::cout << marcel << std::endl;
		std::cout << a72 << std::endl;
		marcel.signForm(a72);
		jean.signForm(a72);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "======================" << std::endl;
	std::cout << "Throw exception when signing form already signed" << std::endl;
	try
	{
		Bureaucrat	jean("Jean", 1);
		Bureaucrat	marcel("Marcel", 2);
		PresidentialPardonForm	a1("Tibo");
		std::cout << jean << std::endl;
		std::cout << marcel << std::endl;
		std::cout << a1 << std::endl;
		jean.signForm(a1);
		marcel.signForm(a1);
		jean.executeForm(a1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "======================" << std::endl;
	std::cout << "Throw exception when executing form\n" << std::endl;
	try
	{
		Bureaucrat	jean("Jean", 1);
		Bureaucrat	marcel("Marcel", 150);
		PresidentialPardonForm	a1("Tibo");
		std::cout << jean << std::endl;
		std::cout << marcel << std::endl;
		std::cout << a1 << std::endl;
		marcel.signForm(a1);
		jean.executeForm(a1);
		jean.signForm(a1);
		jean.executeForm(a1);
	}
	catch(const std::exception& e)
	{
			std::cerr << e.what() << std::endl;
	}
	std::cout << "======================" << std::endl;
	std::cout << "Throw exception when executing form not signed" << std::endl;
	try
	{
		Bureaucrat	jean("Jean", 1);
		Bureaucrat	marcel("Marcel", 150);
		PresidentialPardonForm	a1("Tibo");
		std::cout << jean << std::endl;
		std::cout << marcel << std::endl;
		std::cout << a1 << std::endl;
		jean.executeForm(a1);
		jean.signForm(a1);
		jean.executeForm(a1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "======================" << std::endl;
	std::cout << "Throw exception if the file can't be opened \n" << std::endl;
	try
	{
		Bureaucrat	jean("Jean", 1);
		Bureaucrat	marcel("Marcel", 150);
		ShrubberyCreationForm	a1("tree");
		std::cout << jean << std::endl;
		std::cout << marcel << std::endl;
		std::cout << a1 << std::endl;
		jean.signForm(a1);
		jean.executeForm(a1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "======================" << std::endl;
	std::cout << "Executing ShrubberyCreationForm\n" << std::endl;
	try
	{
		Bureaucrat	jean("Jean", 1);
		Bureaucrat	marcel("Marcel", 150);
		ShrubberyCreationForm	a1("tree1");
		std::cout << jean << std::endl;
		std::cout << marcel << std::endl;
		std::cout << a1 << std::endl;
		jean.signForm(a1);
		jean.executeForm(a1);
	}
	catch(const std::exception& e)
	{
			std::cerr << e.what() << std::endl;
	}
	std::cout << "======================" << std::endl;
	std::cout << "Executing RobotomyRequestForm" << std::endl;
	try
	{
		Bureaucrat	jean("Jean", 1);
		Bureaucrat	marcel("Marcel", 150);
		RobotomyRequestForm	a1("Tibo");
		std::cout << jean << std::endl;
		std::cout << marcel << std::endl;
		std::cout << a1 << std::endl;
		jean.signForm(a1);
		jean.executeForm(a1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "======================" << std::endl;
	std::cout << "Executing PresidentialPardonForm\n" << std::endl;
	try
	{
		Bureaucrat	jean("Jean", 1);
		Bureaucrat	marcel("Marcel", 150);
		PresidentialPardonForm	a1("Tibo");
		std::cout << jean << std::endl;
		std::cout << marcel << std::endl;
		std::cout << a1 << std::endl;
		jean.signForm(a1);
		jean.executeForm(a1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}