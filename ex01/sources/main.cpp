/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:51 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/05 14:31:36 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void)
{
	std::cout << "Throw exception when calling constructor with grade too high" << std::endl;
	try
	{
		Bureaucrat mike("Mike", 0);
		std::cout << mike << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "================================================" << std::endl;
	std::cout << "Throw exception when calling constructor with grade too low" << std::endl;
	try
	{
		Bureaucrat jim("Jim", 151);
		std::cout << jim << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "==============================" << std::endl;
	std::cout << "Throw exeception when calling increase" << std::endl;
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
	std::cout << "==========================" << std::endl;
	std::cout << "Throw exeception when calling decrease" << std::endl;
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
	std::cout << "=========================" << std::endl;
	std::cout << "Throw exception when signed form" << std::endl;
	try
	{
		Bureaucrat	jean("Jean", 1);
		Bureaucrat	marcel("Marcel", 150);
		Form		a1("A1", 1, 30);
		Form		a69("A69", 69, 60);
		Form		a150("A150", 150, 90);
		std::cout << jean << std::endl;
		std::cout << marcel << std::endl;
		std::cout << a1 << std::endl;
		std::cout << a69 << std::endl;
		std::cout << a150 << std::endl;
		jean.signForm(a1);
		marcel.signForm(a69);
		jean.signForm(a69);
		marcel.signForm(a150);
		jean.signForm(a1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
